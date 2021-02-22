# Copyright 2019-present PlatformIO <contact@platformio.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


import sys
import subprocess

from os import makedirs, remove, walk
from os.path import abspath, dirname, isdir, join, normpath
from shutil import rmtree

pio_tools = dirname(abspath(__file__))
python_exe = normpath(sys.executable)


def exec_cmd(*args, **kwargs):
    print(" ".join(args[0]))
    return subprocess.call(*args, **kwargs)

# colorama==0.3.9
# urllib3[secure]==1.24.2
# prettytable==0.7.2
# junit-xml==1.8
# pyyaml==4.2b1
# jsonschema==2.6.0
# future==0.16.0
# six==1.12.0
# mbed-cloud-sdk>=2.0.6,<2.1
# requests>=2.20,<2.21
# idna>=2,<2.8
# pyserial>=3,<=3.4
# Jinja2>=2.10.1,<2.11
# intelhex>=1.3,<=2.2.1
# mbed-ls>=1.5.1,<2.0
# mbed-host-tests>=1.4.4,<2.0
# mbed-greentea>=0.2.24,<2.0
# beautifulsoup4>=4,<=4.6.3
# pyelftools>=0.24,<=0.25
# manifest-tool==1.5.2
# icetea>=1.2.1,<1.3
# pycryptodome>=3.9.3,<4
# pyusb>=1.0.0,<2.0.0
# hidapi>=0.7.99,<0.8.0;platform_system!="Linux"
# cmsis-pack-manager>=0.2.3,<0.3.0
# pywin32==224;platform_system=='Windows'
# wmi==1.4.9;platform_system=='Windows'
# psutil==5.6.6
# cryptography>=2.5,<3
# Click>=7.0,<7.1
# cbor>=1.0.0


def build_packages():

    packages = (
        "intelhex>=1.3,<=2.3.0",
        "jinja2>=2.10.1,<2.11",
        "pyelftools==0.25",
        "beautifulsoup4>=4,<=4.6.3",
        "future==0.17.1",
        "prettytable==0.7.2",
        "jsonschema==2.6.0",
        "six==1.12.0"
    )

    target_dir = join(
        pio_tools, "package_deps", "py%s" % sys.version_info.major)
    if isdir(target_dir):
        rmtree(target_dir)
    makedirs(target_dir)
    for name in packages:
        exec_cmd([
            python_exe, "-m", "pip", "install", "--no-cache-dir",
            "--no-compile", "-t", target_dir, name
        ])
    cleanup_packages(target_dir)


def cleanup_packages(package_dir):
    for root, dirs, files in walk(package_dir):
        for t in ("_test", "test", "tests"):
            if t in dirs:
                rmtree(join(root, t))
        for name in files:
            if name.endswith((".chm", ".pyc")):
                remove(join(root, name))

build_packages()

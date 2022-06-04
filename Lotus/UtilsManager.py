import os

from Utils import build
from Utils import requirements_txt


class UtilsManager:
    def __init__(self, dev=True):
        self.dev = dev
        super(UtilsManager, self).__init__()

    def build(self, main, company_name="QU4R7Z", product_version=1.0, dirname="Lotus-deploy",
              ico=os.path.join(os.path.dirname(os.path.abspath(__file__)), "icon/daisy.ico"),
              plugin_dir=os.path.join(os.path.dirname(os.path.abspath(__file__)), "icon"),
              withconsole=True):
        build.package(main, company_name, product_version, dirname, ico, withconsole, plugin_dir, self.dev)

    def requirements_txt(self):
        requirements_txt.run(self.dev)

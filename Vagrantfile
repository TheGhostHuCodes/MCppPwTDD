# -*- mode: ruby -*-
# vi: set ft=ruby :

VAGRANTFILE_API_VERSION = "2"

Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|
  config.vm.box = "ubuntu/bionic64"
  config.vm.define "MCppPwTDD"
  config.vm.synced_folder ".", "/home/vagrant/repos/MCppPwTDD"
  config.vm.synced_folder "../dotfiles", "/home/vagrant/repos/dotfiles"

  config.vm.provider "virtualbox" do |v|
    v.memory = 4096
    v.customize ["modifyvm", :id, "--vram", "32"]
    v.cpus = 4
  end
end

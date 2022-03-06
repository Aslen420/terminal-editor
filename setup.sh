cd ~
rm -r .extT
mkdir .extT
cd .extT
git clone https://github.com/Aslen420/terminal-editor
cd terminal-editor
gcc terminal-editor.c
mv a.out terminal-editor
cd ~
sed -i '/terminal-editor/d' ./.bashrc
echo "alias terminal-editor='./.extT/terminal-editor/terminal-editor'" >> .bashrc

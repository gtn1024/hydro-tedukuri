const fs = require('fs');
const path = require('path');

// count current dirs
const dirs = fs.readdirSync(__dirname);
const count = dirs.filter(dir => dir.match(/^(\d+)$/)).length;
fs.mkdirSync(path.join(__dirname, `${count + 1}`));
fs.mkdirSync(path.join(__dirname, `${count + 1}`, 'additional_file'));
fs.mkdirSync(path.join(__dirname, `${count + 1}`, 'testdata'));
const testdataConfig = `type: default
time: 1000ms
memory: 256MB
`
fs.writeFileSync(path.join(__dirname, `${count + 1}`, 'testdata', 'config.yaml'), testdataConfig);

const problemConfig = `title:
tag:
- 算法竞赛进阶指南
pid: P${count + 1}
`
fs.writeFileSync(path.join(__dirname, `${count + 1}`, 'problem.yaml'), problemConfig);

const statement = `## 题目描述


## 输入格式


## 输出格式


## 数据范围


## 样例

\`\`\`input1
\`\`\`

\`\`\`output1
\`\`\`

`
fs.writeFileSync(path.join(__dirname, `${count + 1}`, 'problem_zh.md'), statement);

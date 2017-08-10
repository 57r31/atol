# Обертка над драйвером под node.js для FPrint-22ПТК

Очень мало инфы вообще про разработку ПО для Atol, в какой-то момент я
даже не знал, что есть офф библиотека под Linux для c++ (хотя и с
закрытыми исходниками). В данном репозитории просто обётка под node.js,
сделанная на коленке.

Двайвер поддерживает все кассы от Atol, но тут все жестко на
FPrint-22ПТК и общение через serial (задано в конструкторе Atol).

# Пример

```js
const addon = require('bindings')('addon');
const kkm = new addon.Atol('./atol/libfptr.so', 'ttyACM0');

kkm.printText("hello from node.js\n\n\n");
kkm.printFooter();
```

## Официальный драйвер

Файлы взяты из [официального драйвера](http://fs.atol.ru/SitePages/%D0%A6%D0%B5%D0%BD%D1%82%D1%80%20%D0%B7%D0%B0%D0%B3%D1%80%D1%83%D0%B7%D0%BA%D0%B8.aspx?raz1=%D0%9F%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%BD%D0%BE%D0%B5+%D0%BE%D0%B1%D0%B5%D1%81%D0%BF%D0%B5%D1%87%D0%B5%D0%BD%D0%B8%D0%B5&raz2=%D0%94%D0%A2%D0%9E)
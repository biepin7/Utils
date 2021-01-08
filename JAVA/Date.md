
### Date format
```
Date dNow = new Date( );
SimpleDateFormat ft = new SimpleDateFormat ("yyyy-MM-dd hh:mm:ss");
ft.format(dNow)
```

### String to Date
```
String time = primaryData.getData().get(0).getTime();
SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
try {
    Date dpoTime =format.parse(time);
    } catch (ParseException e) {
        e.printStackTrace();
    }
```
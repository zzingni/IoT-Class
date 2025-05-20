## 아두이노(미세먼지 센서)-라즈베리파이 연결 후 데이터 확인
미세먼지 센서를 연결한 아두이노와 라즈베리파이를 usb로 연결 후, influxDb, 그라파나로 데이터 확인 

## InfluxDB 설치
- InfluxDB download key using wget
```
wget -q https://repos.influxdata.com/influxdata-archive_compat.key
echo '393e8779c89ac8d958f81f942f9ad7fb82a25e133faddaf92e15b16e6ac9ce4c influxdata-archive_compat.key' | sha256sum -c && cat influxdata-archive_compat.key | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/influxdata-archive_compat.gpg > /dev/null
echo 'deb [signed-by=/etc/apt/trusted.gpg.d/influxdata-archive_compat.gpg] https://repos.influxdata.com/debian stable main' | sudo tee /etc/apt/sources.list.d/influxdata.list
```
- Packages are up to date && install Influxdb
```
sudo apt-get update && sudo apt-get install influxdb -y
```

- InfluxDB as a background service on startup
```
sudo service influxdb start
```
- InfluxDB is status (service)
```
sudo service influxdb status
```

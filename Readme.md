MM-S50MV 用 Arduinoライブラリ

-------------------------


## MM-S50MVとは

MM-S50MVとは、サンハヤト株式会社 から発売の Spresense向け ToFセンサー Add-onボードです。
詳細は、下記商品サイトをご覧ください。

![](https://cdn.shopify.com/s/files/1/0508/7179/5864/products/image-mm-s50mv-01_5e6ef00b-e57a-4298-b1cb-eabb73f7500e_452x452.jpg?v=1675662916)

MM-S50MV : https://shop.sunhayato.co.jp/products/mm-s50mv

サンハヤト株式会社 ：https://www.sunhayato.co.jp/


-------------------------

### API

#### begin

  引数： なし

  戻り値： なし
  
  説明：
	ライブラリを初期化を行います。。

#### end

  引数： なし

  戻り値： なし
  
  説明：
        ライブラリを破棄します。

#### skip

  引数：int cnt  : 破棄するバイト数を指定します。

  戻り値： なし
  
  説明：
        指定したバイト数だけデータを破棄します。データの同期のために使用します。

#### set

  引数：
          int cmd  : 設定したいコマンドコードを指定します。
          int val  : 設定したいデータを指定します。
          int cnt  : 
  
  戻り値： なし
  
  説明：
        MM-S50MV にコマンドと値を設定します。
        MM-S50MV のコマンドは、デバイス仕様書を参照してください。
        MM-S50MV : https://shop.sunhayato.co.jp/products/mm-s50mv

#### led

  引数：
          int r  : 赤色の値を指定します。
          int g  : 青色の値を指定します。
          int b  : 緑色の値を指定します。
  
  戻り値： なし
  
  説明：
        LEDを指定した色で点灯させます。

#### led

  引数：
          int r  : 赤色の値を指定します。
          int g  : 青色の値を指定します。
          int b  : 緑色の値を指定します。
  
  戻り値： なし
  
  説明：
        LEDを指定した色で点灯させます。

#### get1d

  引数：
  
  戻り値： int32_t distance : 距離データ(mm)

  説明：
        1次元の距離データを取得します。(mm)


#### get3d

  引数： int32_t* ptr : 取得したデータを格納する配列を指定します。uint32_tの4*8個のデータ（128バイト）が格納できるエリアが必要です。

  戻り値：

  説明：
        3次元の距離データを取得します。(mm)


### 使い方

	以下のサンプルコードを参考にしてください。
	
	examples/OneDMesure/OneDMesure.ino
	examples/ThreeDMesure/ThreeDMesure.ino
	examples/ThreeDMesure_wOLED/ThreeDMesure_wOLED.ino


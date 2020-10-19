※公開されているデータは検証段階のβ版になります。  
※実際に制作を検討する際は、設計者（yutaka-miki19(at)iamas.ac.jp）まで、ご一報お願いいたします。
※現在こちらから一部パーツ（MDF、3Dプリントのパーツなど）を提供した上で行うリモートワークショップを随時開催しています。

# エポメトロープとは
エポメトロープとは、デジタルファブリケーションで制作したパーツやオープンソースハードウェア、市販品を組み合わせて作ることができる全周観察型立体ディスプレイです。

# 紹介動画

# 仕組み  
Raspberry Pi が Arduino を介してセンサーの信号を読み取り、自分の向いている方向を認識し、対応した角度の画像を表示します。これにより、エポメトロープの正面からみた時には正面の像が見え、左側から見れば左側の像が見えるようになります。また右目と左目に見える画像の角度や位置が異なることによる視差効果も生まれ、あたかも、立体物が中に入っているように見せることができるのです。  

# 主な材料  
オープンソースハードウェア、モノタロウや秋月電子、ホームセンターなどで購入できる市販品で構成されています。  
・MDF  
・3Dプリンタ用フィラメント  
・Raspberry Pi 3b+ ×2  
・7inch Raspberry Pi LCD Touch Screen ×2  
・Arduino nano every ×2  
・ギアードモーター  
など  

# 作り方 
エポメトロープの制作手順については下記のドキュメントにまとめています。  
『エポメトロープの作り方ー全周觀察型立体ディスプレイを自作する』  
https://docs.google.com/document/d/19RMpfx-YfTb1uZXj3RErybrc5b69bqix4a3tBb6x_-0/edit?usp=sharing  
  
<img src="images/cover-image-500.jpg" width="300">

# アプリケーション開発
Movie converter for epometrope  
https://github.com/yutaka-miki/Movie-converter-for-epometrope  
    
epomeMoviePlayer  
https://github.com/yutaka-miki/epomeMoviePlayer  
  
epomeStreamDemo  
https://github.com/yutaka-miki/epomeStreamDemo  
  
epomeHLSResceiver  
https://github.com/yutaka-miki/epomeHLSResceiver  
  
# 作品  
Aqualium  
https://github.com/yutaka-miki/Aqualium

# OFAD Media Project
https://github.com/yutaka-miki/epometorope-hardware/blob/main/OFAD-Media-Project.md 

MM-S50MV �p Arduino���C�u����

-------------------------


## MM-S50MV�Ƃ�

MM-S50MV�Ƃ́A�T���n���g������� ���甭���� Spresense���� ToF�Z���T�[ Add-on�{�[�h�ł��B
�ڍׂ́A���L���i�T�C�g���������������B

![](https://cdn.shopify.com/s/files/1/0508/7179/5864/products/image-mm-s50mv-01_5e6ef00b-e57a-4298-b1cb-eabb73f7500e_452x452.jpg?v=1675662916)

MM-S50MV : https://shop.sunhayato.co.jp/products/mm-s50mv

�T���n���g������� �Fhttps://www.sunhayato.co.jp/


-------------------------

### API

#### begin

  �����F �Ȃ�

  �߂�l�F �Ȃ�
  
  �����F
	���C�u���������������s���܂��B�B

#### end

  �����F �Ȃ�

  �߂�l�F �Ȃ�
  
  �����F
        ���C�u������j�����܂��B

#### skip

  �����Fint cnt  : �j������o�C�g�����w�肵�܂��B

  �߂�l�F �Ȃ�
  
  �����F
        �w�肵���o�C�g�������f�[�^��j�����܂��B�f�[�^�̓����̂��߂Ɏg�p���܂��B

#### set

  �����F
          int cmd  : �ݒ肵�����R�}���h�R�[�h���w�肵�܂��B
          int val  : �ݒ肵�����f�[�^���w�肵�܂��B
          int cnt  : 
  
  �߂�l�F �Ȃ�
  
  �����F
        MM-S50MV �ɃR�}���h�ƒl��ݒ肵�܂��B
        MM-S50MV �̃R�}���h�́A�f�o�C�X�d�l�����Q�Ƃ��Ă��������B
        MM-S50MV : https://shop.sunhayato.co.jp/products/mm-s50mv

#### led

  �����F
          int r  : �ԐF�̒l���w�肵�܂��B
          int g  : �F�̒l���w�肵�܂��B
          int b  : �ΐF�̒l���w�肵�܂��B
  
  �߂�l�F �Ȃ�
  
  �����F
        LED���w�肵���F�œ_�������܂��B

#### led

  �����F
          int r  : �ԐF�̒l���w�肵�܂��B
          int g  : �F�̒l���w�肵�܂��B
          int b  : �ΐF�̒l���w�肵�܂��B
  
  �߂�l�F �Ȃ�
  
  �����F
        LED���w�肵���F�œ_�������܂��B

#### get1d

  �����F
  
  �߂�l�F int32_t distance : �����f�[�^(mm)

  �����F
        1�����̋����f�[�^���擾���܂��B(mm)


#### get3d

  �����F int32_t* ptr : �擾�����f�[�^���i�[����z����w�肵�܂��Buint32_t��4*8�̃f�[�^�i128�o�C�g�j���i�[�ł���G���A���K�v�ł��B

  �߂�l�F

  �����F
        3�����̋����f�[�^���擾���܂��B(mm)


### �g����

	�ȉ��̃T���v���R�[�h���Q�l�ɂ��Ă��������B
	
	examples/OneDMesure/OneDMesure.ino
	examples/ThreeDMesure/ThreeDMesure.ino
	examples/ThreeDMesure_wOLED/ThreeDMesure_wOLED.ino


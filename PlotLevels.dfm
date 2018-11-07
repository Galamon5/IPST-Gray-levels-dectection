object Form1: TForm1
  Left = 425
  Top = 183
  Width = 186
  Height = 282
  Caption = 'Plotting based on RGB levels'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 0
    Width = 153
    Height = 121
    Caption = 'Ranges'
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 24
      Width = 23
      Height = 13
      Caption = 'From'
    end
    object Label2: TLabel
      Left = 24
      Top = 72
      Width = 16
      Height = 13
      Caption = 'To:'
    end
    object UpDown1: TUpDown
      Left = 113
      Top = 40
      Width = 16
      Height = 21
      Associate = first
      Min = 0
      Max = 257
      Position = 2
      TabOrder = 0
      Wrap = False
    end
    object first: TEdit
      Left = 24
      Top = 40
      Width = 89
      Height = 21
      TabOrder = 1
      Text = '2'
    end
    object last: TEdit
      Left = 24
      Top = 88
      Width = 89
      Height = 21
      TabOrder = 2
      Text = '2'
    end
    object UpDown2: TUpDown
      Left = 113
      Top = 88
      Width = 16
      Height = 21
      Associate = last
      Min = 0
      Max = 257
      Position = 2
      TabOrder = 3
      Wrap = False
    end
  end
  object GroupBox2: TGroupBox
    Left = 9
    Top = 128
    Width = 152
    Height = 73
    Caption = 'Grayscale'
    TabOrder = 1
    object R: TCheckBox
      Left = 16
      Top = 16
      Width = 57
      Height = 17
      Caption = 'Red'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
    object G: TCheckBox
      Left = 88
      Top = 16
      Width = 49
      Height = 17
      Caption = 'Green'
      Checked = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clGreen
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      State = cbChecked
      TabOrder = 1
    end
    object B: TCheckBox
      Left = 16
      Top = 48
      Width = 49
      Height = 17
      Caption = 'Blue'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
    object Gray: TCheckBox
      Left = 88
      Top = 48
      Width = 49
      Height = 17
      Caption = 'Gray'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
    end
  end
  object PGLOk: TBitBtn
    Left = 48
    Top = 208
    Width = 75
    Height = 25
    TabOrder = 2
    Kind = bkOK
  end
end

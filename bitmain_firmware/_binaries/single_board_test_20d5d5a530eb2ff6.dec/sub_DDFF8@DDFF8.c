void sub_DDFF8()
{
  _DWORD *v0; // r4
  int v1; // r0

  if ( dword_21FB2C != -1 )
  {
    v0 = (_DWORD *)sub_10C5B4(&dword_21FB2C);
    v1 = sub_10C5BC(&dword_21FB2C, 0);
    if ( v0 )
    {
      if ( *v0 )
      {
        v1 = sub_B32EC();
        if ( !v0[1] )
        {
LABEL_5:
          if ( !v0[2] )
          {
LABEL_6:
            CRYPTO_free(v0, "crypto/init.c", 448);
            return;
          }
LABEL_8:
          sub_F3AD0(v1);
          goto LABEL_6;
        }
      }
      else if ( !v0[1] )
      {
        goto LABEL_5;
      }
      v1 = sub_CFA04();
      if ( !v0[2] )
        goto LABEL_6;
      goto LABEL_8;
    }
  }
}

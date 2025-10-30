int __fastcall sub_EA298(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  int v7; // r11
  int v8; // r5
  int v9; // r7
  _DWORD *v10; // r4
  _DWORD *v11; // r0
  int v12; // r0

  result = sub_EA278();
  if ( result )
  {
    sub_10C554(dword_6E1A98);
    v6 = dword_6E1A90;
    if ( dword_6E1A90
      || (v12 = sub_E0808(), dword_6E1A90 = sub_10BFCC(v12), sub_E0808(), v6 = dword_6E1A90, (v7 = dword_6E1A90) != 0) )
    {
      v7 = dword_21FB44++;
      v8 = sub_10C010(v6, v4, v5);
      if ( v8 >= dword_21FB44 )
      {
LABEL_10:
        v11 = (_DWORD *)sub_10C01C(dword_6E1A90, v7);
        if ( a1 )
          *v11 = a1;
        if ( a2 )
          v11[1] = a2;
        if ( a3 )
          v11[2] = a3;
      }
      else
      {
        while ( 1 )
        {
          ++v8;
          sub_E0808();
          v10 = sub_E0740((void *)0xC);
          sub_E0808();
          if ( !v10 )
          {
            v7 = 0;
            sub_D0048(8, 106, 65, (int)"crypto/objects/o_names.c", 115);
            goto LABEL_9;
          }
          *v10 = openssl_lh_strcasehash;
          v10[1] = &strcasecmp;
          sub_E0808();
          v9 = sub_10BD3C(dword_6E1A90, v10);
          sub_E0808();
          if ( !v9 )
            break;
          if ( dword_21FB44 <= v8 )
            goto LABEL_10;
        }
        sub_D0048(8, 106, 65, (int)"crypto/objects/o_names.c", 127);
        v7 = 0;
        CRYPTO_free(v10);
      }
    }
LABEL_9:
    sub_10C564(dword_6E1A98);
    return v7;
  }
  return result;
}

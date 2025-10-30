int __fastcall sub_13A920(int a1, _DWORD *a2)
{
  int *v4; // r4
  char **v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r5
  int *v9; // r7
  int *v11; // r0
  int v12; // r0
  int v13; // r3
  int (__fastcall *v14)(int, int); // r5
  int v15; // r0
  int v16; // [sp+Ch] [bp-48h] BYREF
  _BYTE v17[68]; // [sp+10h] [bp-44h] BYREF

  v4 = (int *)sub_D14F4();
  if ( !v4 )
  {
    sub_D0048(46, 154, 65, (int)"crypto/cms/cms_sd.c", 813);
    goto LABEL_13;
  }
  if ( sub_178E08(a1) < 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = sub_EAA20(0x33u);
    v6 = sub_178E88(a1, v5, -3, 4);
    if ( !v6 )
    {
      v9 = 0;
      v8 = -1;
      sub_D0048(46, 154, 114, (int)"crypto/cms/cms_sd.c", 823);
      goto LABEL_10;
    }
  }
  if ( !sub_139328(v4, a2, *(_DWORD **)(a1 + 8)) )
    goto LABEL_13;
  if ( sub_D16E4(v4, (int)v17, &v16) <= 0 )
  {
    sub_D0048(46, 154, 147, (int)"crypto/cms/cms_sd.c", 833);
    goto LABEL_13;
  }
  if ( v6 )
  {
    if ( *(_DWORD *)v6 == v16 )
    {
      v7 = memcmp(v17, *(const void **)(v6 + 8), *(_DWORD *)v6);
      v8 = 1;
      v9 = (int *)v7;
      if ( v7 )
      {
        v8 = 0;
        sub_D0048(46, 154, 158, (int)"crypto/cms/cms_sd.c", 848);
        v9 = 0;
      }
      goto LABEL_10;
    }
    sub_D0048(46, 154, 120, (int)"crypto/cms/cms_sd.c", 842);
LABEL_13:
    v8 = -1;
    v9 = 0;
    goto LABEL_10;
  }
  sub_D8D8C((int)v4);
  v11 = sub_DB4F8(*(int **)(a1 + 32), 0);
  v9 = v11;
  if ( !v11 )
    goto LABEL_13;
  if ( sub_DA898(v11) <= 0 || sub_DB77C((int)v9, -1, 248) <= 0 )
    goto LABEL_24;
  v12 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = v9;
  v13 = *(_DWORD *)(v12 + 12);
  if ( v13 )
  {
    v14 = *(int (__fastcall **)(int, int))(v13 + 92);
    if ( v14 )
    {
      v15 = v14(v12, 5);
      if ( v15 == -2 )
      {
        sub_D0048(46, 170, 125, (int)"crypto/cms/cms_sd.c", 231);
      }
      else
      {
        if ( v15 > 0 )
          goto LABEL_21;
        sub_D0048(46, 170, 111, (int)"crypto/cms/cms_sd.c", 235);
      }
LABEL_24:
      v8 = -1;
      goto LABEL_10;
    }
  }
LABEL_21:
  v8 = sub_DA8E0(v9);
  if ( v8 <= 0 )
  {
    v8 = 0;
    sub_D0048(46, 154, 158, (int)"crypto/cms/cms_sd.c", 868);
  }
LABEL_10:
  sub_DB4BC((int)v9);
  sub_D1504(v4);
  return v8;
}

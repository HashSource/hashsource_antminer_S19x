int __fastcall sub_178F18(int a1)
{
  unsigned int *v2; // r4
  int v3; // r10
  unsigned int v4; // r6
  _DWORD *v5; // r7
  unsigned int v6; // r5
  signed int v7; // r0
  int v8; // r11
  int v9; // r0
  int v10; // r0
  int v11; // r3
  _DWORD *v13; // r7
  signed int v14; // r0
  int v15; // r11
  int v16; // r0
  int v17; // r3
  signed int v18; // r1
  int v19; // r0
  signed int v20; // r1
  int v21; // r0
  int v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]
  int v24; // [sp+Ch] [bp-8h]

  v2 = (unsigned int *)&unk_1E9500;
  v3 = sub_178E08(a1);
  v22 = sub_178E90(a1);
  do
  {
    while ( 1 )
    {
      v4 = *v2;
      v5 = *(_DWORD **)(a1 + 12);
      v6 = v2[1];
      v7 = sub_10E100(v5, *v2, -1);
      v8 = v7;
      if ( v7 >= 0 && (v9 = sub_10E124(v5, v7)) != 0 )
      {
        v10 = sub_10E504(v9);
        v11 = v10;
        if ( (v6 & 1) == 0 )
          goto LABEL_8;
        if ( (v6 & 0x20) != 0 )
        {
          v23 = v10;
          v18 = sub_10E100(v5, v4, v8);
          v11 = v23;
          if ( v18 >= 0 )
          {
            v19 = sub_10E124(v5, v18);
            v11 = v23;
            if ( v19 )
              goto LABEL_8;
          }
        }
        if ( (v6 & 0x40) != 0 )
        {
          if ( v11 != 1 )
            goto LABEL_8;
        }
        else if ( !v11 )
        {
          goto LABEL_8;
        }
      }
      else if ( v3 > 0 && (v6 & 0x11) == 0x11 )
      {
LABEL_8:
        sub_D0048(46, 183, 161, (int)"crypto/cms/cms_att.c", 279);
        return 0;
      }
      v13 = *(_DWORD **)(a1 + 24);
      v14 = sub_10E100(v13, v4, -1);
      v15 = v14;
      if ( v14 >= 0 )
      {
        v16 = sub_10E124(v13, v14);
        if ( v16 )
          break;
      }
      if ( v22 <= 0 )
      {
LABEL_17:
        v2 += 2;
        if ( "crypto/cms/cms_att.c" == (char *)v2 )
          return 1;
      }
      else
      {
        if ( (v6 & 0x12) == 0x12 )
          goto LABEL_8;
        v2 += 2;
        if ( "crypto/cms/cms_att.c" == (char *)v2 )
          return 1;
      }
    }
    v17 = sub_10E504(v16);
    if ( (v6 & 2) == 0 )
      goto LABEL_8;
    if ( (v6 & 0x20) != 0 )
    {
      v24 = v17;
      v20 = sub_10E100(v13, v4, v15);
      v17 = v24;
      if ( v20 >= 0 )
      {
        v21 = sub_10E124(v13, v20);
        v17 = v24;
        if ( v21 )
          goto LABEL_8;
      }
    }
    if ( (v6 & 0x40) != 0 )
    {
      if ( v17 != 1 )
        goto LABEL_8;
      goto LABEL_17;
    }
    if ( !v17 )
      goto LABEL_8;
    v2 += 2;
  }
  while ( "crypto/cms/cms_att.c" != (char *)v2 );
  return 1;
}

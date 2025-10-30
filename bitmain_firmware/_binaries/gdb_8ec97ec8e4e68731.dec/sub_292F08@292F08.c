int __fastcall sub_292F08(char a1)
{
  _BYTE *v2; // r0
  int v3; // r10
  int v4; // r12
  _BYTE *v5; // lr
  int v6; // r11
  __int16 v7; // r0
  int v8; // r1
  _BYTE *v9; // r4
  _BYTE *v10; // r8
  _BYTE *v12; // [sp+4h] [bp-8h]

  v2 = sub_93028(0x200u);
  v3 = dword_48B704;
  v4 = dword_48B708;
  v12 = v2;
  *v2 = a1;
  if ( v4 == v3 )
  {
    v9 = v2 + 1;
  }
  else
  {
    v5 = v2 + 1;
    v6 = 1 - (_DWORD)v2;
    do
    {
      v7 = *((unsigned __int8 *)&dword_48B704 + v4 + 8);
      v8 = v4 + 1;
      v9 = v5;
      if ( v4 + 1 >= 512 )
        v8 = 0;
      v10 = &v5[v6];
      v4 = v8;
      if ( *((_BYTE *)off_46DED0 + 8 * v7) || *((int (**)())off_46DED0 + 2 * v7 + 1) != sub_295EA8 )
      {
        dword_48B708 = v8;
        sub_292D9C(v7);
        goto LABEL_10;
      }
      *v5++ = v7;
    }
    while ( v8 != v3 );
    dword_48B708 = v8;
    v9 = &v10[(_DWORD)v12];
  }
LABEL_10:
  *v9 = 0;
  sub_294F3C(v12);
  return sub_297758(v12);
}

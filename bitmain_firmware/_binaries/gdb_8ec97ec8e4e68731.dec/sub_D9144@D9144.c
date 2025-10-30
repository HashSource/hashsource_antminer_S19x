int __fastcall sub_D9144(int a1, char a2, int a3, int a4)
{
  int v8; // r8
  char *v9; // r0
  _BYTE *v10; // r6
  _DWORD *v11; // r4
  void *v12; // r11
  void *v13; // r10
  int result; // r0
  _DWORD *v15; // [sp+Ch] [bp-8h] BYREF

  v8 = sub_B894C(a1);
  v9 = "";
  if ( a1 )
    v9 = (char *)a1;
  v10 = (_BYTE *)sub_9360C(v9);
  v11 = sub_9836C(0x94u);
  memset(v11, 0, 0x94u);
  v11[4] = 1;
  *((_BYTE *)v11 + 32) = 0;
  *((_BYTE *)v11 + 33) = 0;
  v11[13] = 0;
  v11[14] = 0;
  v11[15] = 0;
  v11[16] = 0;
  v11[17] = 0;
  v11[28] = -1;
  *v11 = off_37E23C;
  if ( *v10 )
  {
    v12 = sub_9836C(0x20u);
    sub_1636B8(v12, v10, 8, "Invalid regexp");
    v13 = (void *)v11[36];
    v11[36] = v12;
    if ( v13 )
    {
      sub_16373C(v13);
      sub_33AC04(v13);
    }
    v11[35] = sub_327254(v10);
  }
  *((_BYTE *)v11 + 136) = a2;
  sub_D0244((int)v11, v8, a3, 0, (int)&unk_47876C);
  v15 = v11;
  v11[4] = a4 != 0;
  sub_D9044(0, (int *)&v15, 1);
  result = (int)v15;
  if ( v15 )
    return (*(int (__fastcall **)(_DWORD *))(*v15 + 4))(v15);
  return result;
}

int __fastcall sub_385B0(int a1, int a2)
{
  _UNKNOWN **v2; // r5
  int (__fastcall **v5)(_DWORD, int, int, int); // r0
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int); // t1
  char v11[52]; // [sp+0h] [bp-34h] BYREF

  v2 = &off_19A72C;
  v5 = (int (__fastcall **)(_DWORD, int, int, int))sub_39BC8();
  v6 = (int)v5;
  if ( !v5 )
  {
LABEL_6:
    puts("edf_load failed no memory");
    exit(v6);
  }
  while ( 1 )
  {
    v7 = (*v5)(v5, a1, a2, 14);
    if ( v7 >= 0 && (v7 & 2) != 0 )
      return v6;
    v8 = (*(int (__fastcall **)(int))(v6 + 296))(v6);
    if ( v2 == &off_19A730 )
    {
      sub_1E938(v11, 0x30u);
      printf("%s ", v11);
      printf("%s : got nothing\n\n", "edf_load");
      strcpy(byte_62BA68, "got nothing\n");
      sub_3CC5C(byte_62BA68, v11);
      return 0;
    }
    v9 = (int (__fastcall *)(int))v2[1];
    ++v2;
    v5 = (int (__fastcall **)(_DWORD, int, int, int))v9(v8);
    v6 = (int)v5;
    if ( !v5 )
      goto LABEL_6;
  }
}

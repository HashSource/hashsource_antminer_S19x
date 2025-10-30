void __fastcall sub_435E4(int a1)
{
  int v1; // r5
  void *v2; // r1
  int v3; // r0
  char *v4; // r0
  char *v5; // r5
  void **v6; // [sp+0h] [bp-808h] BYREF
  int v7; // [sp+4h] [bp-804h] BYREF
  char v8[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = **(_DWORD **)(a1 + 152);
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    strcpy(v8, "update job");
    sub_20F58(5, v8, 0);
  }
  v2 = *(void **)v1;
  *(_BYTE *)(v1 + 63) = 0;
  *(_BYTE *)(v1 + 62) = 0;
  v6 = sub_36CD4(v1, v2);
  sub_2CEA0(&v6, "driver-btm-c5_socketa.c", "bitmain_c5_update", 261);
  v3 = sub_31FF4();
  if ( !*(_BYTE *)(v3 + 640) )
  {
    strcpy(v8, "Bitmain S9 has to use stratum pools");
    sub_20F58(3, v8, 1);
    sub_3EBA0(1);
  }
  if ( dword_69178 )
  {
    *(_BYTE *)(v3 + 680) = 1;
    dword_69178 = 0;
  }
  v4 = sub_43370(v3, (size_t *)&v7);
  v5 = v4;
  if ( v7 && sub_42610((int)v4, v7) && (byte_74500 || byte_68BD4 || dword_67DB4 > 2) )
  {
    snprintf(v8, 0x800u, "%s: update job failed.", "bitmain_c5_update");
    sub_20F58(3, v8, 0);
  }
  free(v5);
}

void __fastcall sub_5CDA8(int a1)
{
  char v1[2048]; // [sp+Ch] [bp-818h] BYREF
  int v2; // [sp+80Ch] [bp-18h] BYREF
  _DWORD *v3; // [sp+810h] [bp-14h] BYREF
  void *ptr; // [sp+814h] [bp-10h]
  int v5; // [sp+818h] [bp-Ch]
  int v6; // [sp+81Ch] [bp-8h]

  v6 = **(_DWORD **)(a1 + 152);
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v1, "update job");
    sub_1E4EC(7, v1, 0);
  }
  *(_BYTE *)(v6 + 63) = 0;
  *(_BYTE *)(v6 + 62) = 0;
  v3 = sub_44158(v6, *(_DWORD *)v6);
  sub_36898((void **)&v3, "driver-btm-c5_socketa.c", "bitmain_c5_update", 288);
  v5 = sub_2F984();
  if ( *(_BYTE *)(v5 + 656) != 1 )
  {
    strcpy(v1, "Bitmain S9 has to use stratum pools");
    sub_1E4EC(3, v1, 1);
    sub_4BFB0(1);
  }
  if ( dword_87E78 )
  {
    *(_BYTE *)(v5 + 696) = 1;
    dword_87E78 = 0;
  }
  ptr = sub_5C974(v5, (size_t *)&v2);
  if ( v2 && sub_584D0((int)ptr, v2) && (byte_91F58 || byte_87769 || dword_8697C > 2) )
  {
    snprintf(v1, 0x800u, "%s: update job failed.", "bitmain_c5_update");
    sub_1E4EC(3, v1, 0);
  }
  free(ptr);
}

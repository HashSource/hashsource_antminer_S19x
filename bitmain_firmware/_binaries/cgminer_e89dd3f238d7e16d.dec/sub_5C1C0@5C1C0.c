void __fastcall sub_5C1C0(int a1)
{
  char v1[2048]; // [sp+Ch] [bp-818h] BYREF
  int v2; // [sp+80Ch] [bp-18h] BYREF
  _DWORD *v3; // [sp+810h] [bp-14h] BYREF
  void *ptr; // [sp+814h] [bp-10h]
  int v5; // [sp+818h] [bp-Ch]
  int v6; // [sp+81Ch] [bp-8h]

  v6 = **(_DWORD **)(a1 + 152);
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v1, "update job");
    sub_1DB6C(7, v1, 0);
  }
  *(_BYTE *)(v6 + 63) = 0;
  *(_BYTE *)(v6 + 62) = 0;
  v3 = sub_433C4(v6, *(_DWORD *)v6);
  sub_35858((void **)&v3, "driver-btm-c5_socketa.c", "bitmain_c5_update", 288);
  v5 = sub_2E98C();
  if ( *(_BYTE *)(v5 + 640) != 1 )
  {
    strcpy(v1, "Bitmain S9 has to use stratum pools");
    sub_1DB6C(3, v1, 1);
    sub_4B2A0(1);
  }
  if ( dword_86CE0 )
  {
    *(_BYTE *)(v5 + 680) = 1;
    dword_86CE0 = 0;
  }
  ptr = sub_5BD8C(v5, (size_t *)&v2);
  if ( v2 && sub_5795C((int)ptr, v2) && (byte_90DC0 || byte_865D1 || dword_857E4 > 2) )
  {
    snprintf(v1, 0x800u, "%s: update job failed.", "bitmain_c5_update");
    sub_1DB6C(3, v1, 0);
  }
  free(ptr);
}

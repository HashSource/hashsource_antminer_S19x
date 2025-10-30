void __fastcall sub_2F014(const char *a1, _DWORD *a2)
{
  char v4[2048]; // [sp+2Ch] [bp-C28h] BYREF
  char v5[1024]; // [sp+82Ch] [bp-428h] BYREF
  size_t v6; // [sp+C2Ch] [bp-28h]
  size_t size; // [sp+C30h] [bp-24h]
  void *v8; // [sp+C34h] [bp-20h]
  void *v9; // [sp+C38h] [bp-1Ch]
  void *ptr; // [sp+C3Ch] [bp-18h]
  int v11; // [sp+C40h] [bp-14h]
  int v12; // [sp+C44h] [bp-10h]
  int v13; // [sp+C48h] [bp-Ch]
  int v14; // [sp+C4Ch] [bp-8h]

  if ( !dword_88364 )
    return;
  v14 = a2[64];
  v13 = sub_2EF64(v14);
  v12 = a2[65];
  v11 = a2[108];
  ptr = sub_20744((int)(a2 + 40), 32);
  v9 = sub_20744((int)(a2 + 48), 32);
  v8 = sub_20744((int)a2, 128);
  size = snprintf(
           v5,
           0x400u,
           "%lu,%s,%s,%s,%s%u,%u,%s,%s\n",
           v11,
           a1,
           (const char *)ptr,
           *(const char **)(v12 + 164),
           *(const char **)(*(_DWORD *)(v13 + 4) + 8),
           *(_DWORD *)(v13 + 8),
           v14,
           (const char *)v9,
           (const char *)v8);
  free(ptr);
  free(v9);
  free(v8);
  if ( (int)size >= 1024 )
  {
    v5[1023] = 0;
LABEL_10:
    sub_2E354(&stru_8834C, "cgminer.c", "sharelog", 684);
    v6 = fwrite(v5, size, 1u, (FILE *)dword_88364);
    fflush((FILE *)dword_88364);
    sub_2E484(&stru_8834C, "cgminer.c", "sharelog", 687);
    if ( v6 != 1 && (byte_91F58 || byte_87769 || dword_8697C > 2) )
    {
      strcpy(v4, "sharelog fwrite error");
      sub_1E4EC(3, v4, 0);
    }
    return;
  }
  if ( (size & 0x80000000) == 0 )
    goto LABEL_10;
  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    strcpy(v4, "sharelog printf error");
    sub_1E4EC(3, v4, 0);
  }
}

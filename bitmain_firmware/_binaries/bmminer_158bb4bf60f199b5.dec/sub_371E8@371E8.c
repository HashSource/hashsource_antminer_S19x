int __fastcall sub_371E8(int a1, const char *a2)
{
  unsigned int v4; // r6
  int *v6; // r8
  int *v7; // r0
  int *v8; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = a1 - 160;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] sweep_type = 0x%X, pattern_file_path = %s\n", a1, a2);
    sub_47AB4(4, s, 0);
    if ( v4 > 1 )
      goto LABEL_3;
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(s, "[DEBUG] allocate memory for pattern test.\n");
      sub_47AB4(4, s, 0);
    }
  }
  else if ( v4 > 1 )
  {
LABEL_3:
    sub_31794(20, 255);
    if ( (unsigned int)dword_9E31C <= 3 )
      return -1;
    snprintf(s, 0x800u, "Invalid sweep type 0x%X\n", a1);
LABEL_13:
    sub_47AB4(3, s, 0);
    return -1;
  }
  v6 = (int *)dword_1AEA78;
  if ( !dword_1AEA78 )
  {
    v7 = (int *)calloc(0xECu, 1u);
    v6 = v7;
    dword_1AEA78 = (int)v7;
    if ( !v7 )
    {
      sub_31794(13, 255);
      if ( (unsigned int)dword_9E31C <= 3 )
        return -1;
      strcpy(s, "Fail to allocate memory for send work context.\n");
      goto LABEL_13;
    }
    v8 = v7 + 1;
    do
    {
      v8[1] = 0;
      ++v8;
    }
    while ( v8 != v7 + 17 );
  }
  *v6 = a1;
  if ( a1 == 160 )
    v6[1] = (int)sub_33918();
  else
    v6[1] = (int)sub_32B3C();
  return (*(int (__fastcall **)(const char *))(*(_DWORD *)(dword_1AEA78 + 4) + 4))(a2);
}

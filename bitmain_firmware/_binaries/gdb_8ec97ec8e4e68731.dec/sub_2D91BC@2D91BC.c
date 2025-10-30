int __fastcall sub_2D91BC(int a1, int a2)
{
  char *v4; // r0
  unsigned int v5; // r3
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int (__fastcall *v11)(int); // r3
  int v12; // r0
  int v13; // r6
  void *v14; // r1
  _BYTE *v15; // r0
  unsigned int v16; // r12
  int v17; // r2

  v4 = strchr(*(const char **)(a2 + 12), 64);
  if ( v4 )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344) + 8) = strtol(v4 + 1, 0, 10);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 == 1 )
  {
    if ( *(_DWORD *)(a2 + 4) <= 0x9Bu )
    {
      return 0;
    }
    else
    {
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(*(_DWORD *)(a2 + 16) + 8);
      v10 = *(_DWORD *)(a2 + 16);
      v11 = *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76);
      **(_DWORD **)(*(_DWORD *)(a1 + 160) + 2344) = v9;
      v12 = v11(v10 + 80);
      v13 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344);
      v14 = (void *)(*(_DWORD *)(a2 + 16) + 124);
      *(_DWORD *)(v13 + 4) = v12;
      v15 = sub_2D8F98(a1, v14, 0x1Fu);
      v16 = *(_DWORD *)(a2 + 20);
      v17 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(v13 + 16) = v15;
      return sub_2D8D10(a1, ".note.netbsdcore.procinfo", v17, 0, v16);
    }
  }
  else
  {
    if ( v5 <= 0x1F )
      return 1;
    v7 = sub_2A6780(a1);
    v8 = *(_DWORD *)(a2 + 8);
    if ( v7 == 6 || v7 == 38 )
    {
      if ( v8 != 32 )
      {
        if ( v8 != 34 )
          return 1;
        return sub_2D8D10(a1, ".reg2", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
      }
    }
    else if ( v8 != 33 )
    {
      if ( v8 != 35 )
        return 1;
      return sub_2D8D10(a1, ".reg2", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
    }
    return sub_2D8D10(a1, ".reg", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
  }
}

size_t __fastcall sub_2EF3D0(int a1, _BYTE *a2, int a3)
{
  int v4; // r9
  size_t result; // r0
  size_t v6; // r10
  size_t v7; // r3
  int v8; // r4
  const char *v9; // r5
  size_t v10; // r7
  const char *v11; // r1
  _BYTE *v12; // r5
  _BYTE *v13; // r1
  _BYTE *v14; // r5
  int v15; // r4
  int v16; // r8
  int (__fastcall *v17)(int); // r3
  int v18; // r1
  int *v19; // r11
  unsigned int v20; // r1
  _DWORD *i; // r4
  int *v22; // r1
  _BYTE *v23; // [sp+0h] [bp-14h]
  int v24; // [sp+4h] [bp-10h]

  v4 = 0;
  v24 = 1;
  *a2 = 65;
  v23 = a2 + 1;
  while ( 1 )
  {
    result = sub_2EF2C0(a1, v4);
    v6 = result;
    if ( result )
    {
      v8 = *(_DWORD *)(a1 + 4);
      if ( v4 )
      {
        v9 = "gnu";
        v10 = 4;
      }
      else
      {
        v9 = *(const char **)(*(_DWORD *)(v8 + 444) + 408);
        v10 = strlen(v9) + 1;
      }
      (*(void (__fastcall **)(size_t, _BYTE *))(v8 + 48))(v6, v23);
      v11 = v9;
      v12 = &v23[v10 + 4];
      memcpy(v23 + 4, v11, v10);
      *v12 = 1;
      v13 = v12 + 1;
      v14 = v12 + 5;
      v15 = 2;
      (*(void (__fastcall **)(size_t, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(v6 - 4 - v10, v13);
      v16 = *(_DWORD *)(a1 + 160);
      do
      {
        v17 = *(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 424);
        if ( v17 )
          v18 = v17(v15);
        else
          v18 = v15;
        v19 = (int *)(v16 + 852 * v4 + 596 + 12 * v18);
        result = sub_2EF0BC(v19);
        if ( !result )
        {
          result = (size_t)sub_2EF184(v14, v20, v19);
          v14 = (_BYTE *)result;
        }
        ++v15;
      }
      while ( v15 != 71 );
      for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 4 * (v4 + 574) + 4); i; i = (_DWORD *)*i )
      {
        result = sub_2EF0BC(i + 2);
        if ( !result )
        {
          result = (size_t)sub_2EF184(v14, i[1], v22);
          v14 = (_BYTE *)result;
        }
      }
    }
    v23 += v6;
    v7 = v24 + v6;
    v24 += v6;
    if ( v4 == 1 )
      break;
    v4 = 1;
  }
  if ( a3 != v7 )
    sub_2A6BF0((int)"elf-attrs.c", 225, (int)"bfd_elf_set_obj_attr_contents");
  return result;
}

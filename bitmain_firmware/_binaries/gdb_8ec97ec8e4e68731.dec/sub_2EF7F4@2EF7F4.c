_DWORD *__fastcall sub_2EF7F4(_DWORD *result, int a2)
{
  _DWORD *v3; // r8
  int v4; // r9
  int i; // r7
  int v6; // r11
  int v7; // r4
  int v8; // r5
  int v9; // r11
  char *v10; // r1
  int **j; // r4
  int v12; // r3

  if ( *(_DWORD *)(result[1] + 4) == 5 && *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4) == 5 )
  {
    v3 = result;
    v4 = 620;
    for ( i = 0; ; i = 1 )
    {
      v6 = v3[40] + v4;
      v7 = v6 + 12;
      v8 = *(_DWORD *)(a2 + 160) + v4 + 12;
      v9 = v6 + 840;
      do
      {
        while ( 1 )
        {
          v10 = *(char **)(v7 - 4);
          *(_DWORD *)(v8 - 12) = *(_DWORD *)(v7 - 12);
          *(_DWORD *)(v8 - 8) = *(_DWORD *)(v7 - 8);
          if ( v10 )
          {
            if ( *v10 )
              break;
          }
          v7 += 12;
          v8 += 12;
          if ( v7 == v9 )
            goto LABEL_9;
        }
        v7 += 12;
        result = sub_2EF628(a2, v10);
        *(_DWORD *)(v8 - 4) = result;
        v8 += 12;
      }
      while ( v7 != v9 );
LABEL_9:
      for ( j = *(int ***)(v3[40] + 4 * (i + 574) + 4); j; j = (int **)*j )
      {
        v12 = (unsigned int)j[2] & 3;
        switch ( v12 )
        {
          case 2:
            result = sub_2EF718(a2, i, (unsigned int)j[1], (char *)j[4]);
            break;
          case 3:
            result = sub_2EF784(a2, i, (unsigned int)j[1], (int)j[3], (char *)j[4]);
            break;
          case 1:
            result = (_DWORD *)sub_2EF6BC(a2, i, (unsigned int)j[1], (int)j[3]);
            break;
          default:
            sub_2A6BF0((int)"elf-attrs.c", 389, (int)"_bfd_elf_copy_obj_attributes");
        }
      }
      v4 += 852;
      if ( i == 1 )
        break;
    }
  }
  return result;
}

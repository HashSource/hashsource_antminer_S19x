int __fastcall sub_BCCD8(int a1, int a2)
{
  char *v4; // r2
  int v5; // r3
  int result; // r0
  __int64 v7; // r0

  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
    sub_C0A80();
  v4 = *(char **)(a2 + 24);
  v5 = *v4;
  if ( v5 == 12 )
  {
    a2 = *((_DWORD *)v4 + 5);
    v4 = *(char **)(a2 + 24);
    v5 = *v4;
  }
  switch ( v5 )
  {
    case 1:
    case 5:
    case 8:
    case 18:
    case 19:
    case 20:
    case 21:
      switch ( *(_DWORD *)(a2 + 20) )
      {
        case 1:
          result = sub_C09B8(a1, 23);
          goto LABEL_8;
        case 2:
          result = sub_C09B8(a1, 24);
          goto LABEL_8;
        case 4:
          result = sub_C09B8(a1, 25);
          goto LABEL_8;
        case 8:
          result = sub_C09B8(a1, 26);
LABEL_8:
          if ( (*(_BYTE *)(*(_DWORD *)(a2 + 24) + 1) & 1) == 0 )
            result = sub_C0A68(a1, 8 * *(_DWORD *)(a2 + 20));
          break;
        default:
          v7 = sub_94700((int)"ax-gdb.c", 511, "gen_fetch: strange size");
          result = sub_BCE34(v7, HIDWORD(v7));
          break;
      }
      return result;
    default:
      sub_946E0("gen_fetch: Unsupported type code `%s'.", *((const char **)v4 + 2));
  }
}

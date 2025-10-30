int __fastcall sub_88E10(int a1, int a2)
{
  int v2; // r3

  switch ( *(_BYTE *)(a1 + 4097) )
  {
    case '!':
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 292) != *(_DWORD *)(a1 + 4100) )
        goto LABEL_8;
      return 0;
    case '*':
      goto LABEL_8;
    case '.':
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 292) >= *(_DWORD *)(a1 + 4100) )
        goto LABEL_8;
      v2 = 0;
      break;
    case '=':
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 292) == *(_DWORD *)(a1 + 4100) )
LABEL_8:
        v2 = (*(int (__fastcall **)(int, int))(a1 + 6268))(a1, a2);
      else
        v2 = 0;
      break;
    default:
      v2 = 0;
      break;
  }
  return v2;
}

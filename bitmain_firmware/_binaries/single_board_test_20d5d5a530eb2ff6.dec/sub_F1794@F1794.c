int __fastcall sub_F1794(_DWORD *a1, int a2)
{
  int v4; // r3

  switch ( (unsigned int)sub_EAC84(*(_DWORD *)(a2 + 16)) )
  {
    case 0x15u:
      v4 = *(_DWORD *)(a2 + 20);
      break;
    case 0x16u:
      v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 20) + 20);
      break;
    case 0x17u:
      v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 8) + 8);
      if ( v4 )
        goto LABEL_5;
      v4 = sub_B2068();
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 8) + 8) = v4;
      break;
    case 0x18u:
      v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 20) + 8);
      if ( v4 )
        goto LABEL_5;
      v4 = sub_B2068();
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 20) + 8) = v4;
      break;
    default:
      return 0;
  }
  if ( !v4 )
    return 0;
LABEL_5:
  *(_DWORD *)(v4 + 12) |= 0x10u;
  *a1 = v4 + 8;
  return 1;
}

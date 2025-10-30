int __fastcall sub_9E7EC(int a1)
{
  int v1; // r0
  int v2; // r2
  __int64 v3; // r0
  int v4; // r3
  char v5; // r3

  v1 = sub_176ED4(a1, 0);
  v2 = *(_DWORD *)(v1 + 24);
  switch ( *(_BYTE *)v2 )
  {
    case 5:
      LODWORD(v3) = *(_DWORD *)(*(_DWORD *)(v2 + 24) + 24 * *(__int16 *)(v2 + 4) - 24);
      break;
    case 8:
    case 0x14:
      v4 = 8 * *(_DWORD *)(v1 + 20);
      if ( (*(_BYTE *)(v2 + 1) & 1) != 0 )
        v5 = v4 - 1;
      else
        v5 = v4 - 2;
      LODWORD(v3) = ((1 << v5) - 1) | (1 << v5);
      break;
    case 0xC:
      v3 = *(_QWORD *)(*(_DWORD *)(v2 + 24) + 24);
      break;
    case 0x15:
      LODWORD(v3) = 1;
      break;
    default:
      sub_946E0("Unexpected type in ada_discrete_type_high_bound.");
  }
  return v3;
}

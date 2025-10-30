int __fastcall sub_9E8E8(int a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // r0
  __int64 v4; // r0

  v1 = sub_176ED4(a1, 0);
  v2 = *(_DWORD *)(v1 + 24);
  switch ( *(_BYTE *)v2 )
  {
    case 5:
      return *(_QWORD *)*(_DWORD *)(v2 + 24);
    case 8:
    case 0x14:
      v3 = *(_DWORD *)(v1 + 20);
      if ( (*(_BYTE *)(v2 + 1) & 1) != 0 )
        goto LABEL_3;
      LODWORD(v4) = ~(((1 << (8 * v3 - 2)) - 1) | (1 << (8 * v3 - 2)));
      break;
    case 0xC:
      return *(_QWORD *)(*(_DWORD *)(v2 + 24) + 8);
    case 0x15:
LABEL_3:
      LODWORD(v4) = 0;
      break;
    default:
      sub_946E0("Unexpected type in ada_discrete_type_low_bound.");
  }
  return v4;
}

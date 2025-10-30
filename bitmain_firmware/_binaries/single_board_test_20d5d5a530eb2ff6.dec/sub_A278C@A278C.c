int __fastcall sub_A278C(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v3; // r3
  int v4; // r3
  int result; // r0

  v3 = *(_DWORD *)(a1[257] + 16) & 0x30000;
  switch ( v3 )
  {
    case 131072:
      *a2 = &unk_1A9DAA;
      *a3 = 1;
      return 1;
    case 196608:
      *a2 = &unk_1A9DA8;
      *a3 = 2;
      return 2;
    case 65536:
      *a2 = &unk_1A9DA8;
      *a3 = 1;
      return 1;
    default:
      v4 = a1[349];
      if ( v4 )
      {
        result = a1[348];
        *a2 = v4;
        *a3 = result;
      }
      else
      {
        *a2 = &unk_1A9DAC;
        *a3 = 5;
        return 5;
      }
      break;
  }
  return result;
}

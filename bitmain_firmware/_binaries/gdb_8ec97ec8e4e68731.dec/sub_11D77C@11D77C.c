int __fastcall sub_11D77C(int a1)
{
  int result; // r0
  char v3; // r2
  int v4; // r3
  int v5; // [sp+0h] [bp-8h] BYREF
  int v6; // [sp+4h] [bp-4h] BYREF

  result = *(_DWORD *)(a1 + 72);
  if ( result )
  {
    result = sub_1CCA00(result, &v5, &v6);
    if ( result )
    {
      if ( v5 <= 3 )
      {
        v3 = 1;
        *(_BYTE *)(a1 + 192) |= 8u;
      }
      else
      {
        if ( v5 == 4 )
        {
          v4 = v6;
          if ( v6 <= 5 )
            *(_BYTE *)(a1 + 192) |= 8u;
          else
            *(_BYTE *)(a1 + 192) &= ~8u;
          if ( v4 <= 2 )
          {
            v3 = 1;
            goto LABEL_7;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 192) &= ~8u;
        }
        v3 = 0;
      }
LABEL_7:
      *(_BYTE *)(a1 + 192) = *(_BYTE *)(a1 + 192) & 0xEF | (16 * (v3 & 1));
      goto LABEL_8;
    }
    result = sub_1CCAF4(*(_DWORD *)(a1 + 72), &v5, &v6);
    if ( result )
      *(_BYTE *)(a1 + 192) = *(_BYTE *)(a1 + 192) & 0xDF | (32 * (v5 <= 13));
  }
LABEL_8:
  *(_BYTE *)(a1 + 192) |= 4u;
  return result;
}

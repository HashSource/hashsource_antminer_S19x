int __fastcall sub_41064(int result)
{
  int v1; // r4
  unsigned __int8 *v2; // r6
  float v3; // s0
  int v4; // r3
  int *v5; // r9
  int i; // r8
  int v7; // r1
  int *v8; // r3
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = result;
  if ( (unsigned int)result <= 0xBB8 )
  {
    if ( (unsigned int)result <= 0x63 )
      v1 = 100;
  }
  else
  {
    v1 = 3000;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v9, 0x800u, "inc freq delay:%d", v1);
    result = sub_3B6AC(4, v9, 0, v4);
  }
  if ( dword_B32C0 != 2 )
  {
    v2 = (unsigned __int8 *)&unk_535948;
    v3 = flt_B3064;
    goto LABEL_9;
  }
  v5 = &dword_533B40;
  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      result = sub_26A44();
      if ( result > 0 )
      {
        v7 = dword_534B44[i];
        v8 = v5;
        do
        {
          v8[1] = v7;
          ++v8;
        }
        while ( v8 != &dword_533B44[256 * i + result - 1] );
      }
    }
    v5 += 256;
  }
  LOWORD(v2) = (unsigned __int16)&unk_535948;
  v3 = flt_B3064;
  if ( flt_B3064 <= 0.0 )
  {
    HIWORD(v2) = (unsigned int)&unk_535948 >> 16;
LABEL_9:
    if ( v3 > 0.0 )
      return result;
LABEL_17:
    result = sub_23FD0(dword_533B44, v2[-3568], 1);
    *(_DWORD *)&v2[-3572] = result;
    return result;
  }
  HIWORD(v2) = (unsigned int)&unk_535948 >> 16;
  result = sub_2357C(v2[-3568], dword_B32C4, *(_DWORD *)&v2[-3572], v1);
  if ( flt_B3064 <= 0.0 )
    goto LABEL_17;
  return result;
}

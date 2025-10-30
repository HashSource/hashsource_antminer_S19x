bool __fastcall sub_1A7410(int a1, int a2)
{
  unsigned int v2; // r1
  int v4; // r6
  int v5; // r2
  bool v6; // zf
  int v8; // r0
  int v9; // r0
  _BYTE v10[4]; // [sp+0h] [bp-20h] BYREF
  __int16 v11; // [sp+4h] [bp-1Ch] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  if ( (v2 & 0xFFFFF000) == 0xFFFFF000 )
    return 0;
  v4 = *(_DWORD *)(dword_487AA4 + 116) + 4 * (*(_DWORD *)(a1 + 44) + (v2 >> 12));
  (*(void (__fastcall **)(int, int, _BYTE *))(dword_487AA8 + 72))(*(unsigned __int8 *)(a1 + 60) >> 7, v4, v10);
  v5 = v10[0] & 0xF8;
  v6 = v5 == 48;
  if ( v5 != 48 )
    v6 = (v10[0] & 0xFC) == 56;
  if ( !v6 )
    return 0;
  (*(void (__fastcall **)(int, int, __int16 *))(dword_487AA8 + 76))(*(unsigned __int8 *)(a1 + 60) >> 7, v4 + 4, &v11);
  if ( (v11 & 0xFFF) != 0xFFF )
    return 0;
  v8 = v4 + 8;
  if ( *(char *)(a1 + 60) < 0 )
    v9 = sub_2AB5EC(v8);
  else
    v9 = sub_2AB5F8(v8);
  return v9 == -1;
}

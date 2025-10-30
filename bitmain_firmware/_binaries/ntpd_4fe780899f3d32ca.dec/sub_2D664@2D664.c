int __fastcall sub_2D664(int a1, int (*a2)(int, const char *, ...), int a3)
{
  int result; // r0
  int v7; // r3
  int v8; // r5
  int v9; // r4
  __int64 v10; // r2
  __int64 v11; // [sp+28h] [bp-34h] BYREF
  __int64 v12; // [sp+30h] [bp-2Ch] BYREF
  unsigned __int16 v13; // [sp+3Ch] [bp-20h] BYREF
  unsigned __int8 v14; // [sp+40h] [bp-1Ch]
  unsigned __int8 v15; // [sp+41h] [bp-1Bh]
  unsigned __int16 v16; // [sp+48h] [bp-14h] BYREF
  unsigned __int8 v17; // [sp+4Ch] [bp-10h]
  unsigned __int8 v18; // [sp+4Dh] [bp-Fh]

  sub_666D8(&v16, a1 + 24);
  result = a2(a3, "leap table (%u entries) expires at %04u-%02u-%02u:\n", *(unsigned __int16 *)(a1 + 32), v16, v17, v18);
  v7 = *(unsigned __int16 *)(a1 + 32);
  if ( *(_WORD *)(a1 + 32) )
  {
    v8 = v7 - 1;
    v9 = a1 + 16 * v7;
    do
    {
      v10 = *(_QWORD *)(v9 + 64);
      --v8;
      v9 -= 16;
      v12 = v10;
      sub_666D8(&v16, &v12);
      sub_6DD38(&v11, &v12, *(_DWORD *)(v9 + 88));
      v12 = v11;
      sub_666D8(&v13, &v12);
      result = a2(
                 a3,
                 "%04u-%02u-%02u [%c] (%04u-%02u-%02u) - %d\n",
                 v16,
                 v17,
                 v18,
                 (unsigned __int8)asc_95648[*(_BYTE *)(v9 + 94) != 0],
                 v13,
                 v14,
                 v15,
                 *(__int16 *)(v9 + 92));
    }
    while ( v8 != -1 );
  }
  return result;
}

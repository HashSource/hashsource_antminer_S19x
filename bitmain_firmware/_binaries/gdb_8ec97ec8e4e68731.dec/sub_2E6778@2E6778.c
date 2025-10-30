int __fastcall sub_2E6778(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r8
  int v10; // r3
  int v11; // r2
  int result; // r0
  int v13; // r12
  int v14; // r3
  char v15; // r2
  int v16; // [sp+1Ch] [bp-4h] BYREF

  if ( a3 && (v8 = sub_2FC920(*(_DWORD *)(a2 + 28), a3, 0), (v9 = v8) != 0) )
  {
    v10 = *(unsigned __int8 *)(v8 + 12);
    v11 = *(_DWORD *)(a2 + 16);
    if ( (unsigned int)(v10 - 3) <= 1 && (*(_BYTE *)(v8 + 51) & 2) != 0 && *(unsigned __int8 *)(v8 + 48) <= 1u )
    {
      *(_BYTE *)(v8 + 48) = 1;
      if ( v11 )
      {
        sub_2A6A5C("%B: stack size specified and %s set", a1, a3);
        v10 = *(unsigned __int8 *)(v9 + 12);
        v11 = *(_DWORD *)(a2 + 16);
      }
      else if ( *(char ***)(v8 + 20) == &off_470950 )
      {
        v11 = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(a2 + 16) = v11;
      }
      else
      {
        sub_2A6A5C("%B: %s not absolute", a1, a3);
        v10 = *(unsigned __int8 *)(v9 + 12);
        v11 = *(_DWORD *)(a2 + 16);
      }
    }
    if ( !v11 )
      *(_DWORD *)(a2 + 16) = a4;
    if ( (unsigned int)(v10 - 1) > 1 )
      return 1;
    v13 = *(_DWORD *)(a1 + 4);
    v16 = 0;
    result = sub_2FD6C4(
               a2,
               a1,
               a3,
               2,
               (int)&off_470950,
               *(_DWORD *)(a2 + 16) & ~(*(int *)(a2 + 16) >> 31),
               0,
               0,
               *(_BYTE *)(*(_DWORD *)(v13 + 444) + 464) & 1,
               (int)&v16);
    if ( result )
    {
      v14 = v16;
      v15 = *(_BYTE *)(v16 + 51);
      *(_BYTE *)(v16 + 48) = 1;
      *(_BYTE *)(v14 + 51) = v15 | 2;
      return 1;
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 16) )
      return 1;
    *(_DWORD *)(a2 + 16) = a4;
    return 1;
  }
  return result;
}

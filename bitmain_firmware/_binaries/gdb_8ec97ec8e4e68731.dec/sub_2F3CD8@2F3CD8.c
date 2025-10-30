int __fastcall sub_2F3CD8(int a1)
{
  _DWORD *v1; // r6
  int v2; // r5
  int v4; // r2
  int result; // r0
  int v6; // r3
  char v7; // r12
  int v8; // [sp+1Ch] [bp-4h] BYREF

  v1 = *(_DWORD **)(a1 + 28);
  v8 = 0;
  v2 = v1[42];
  if ( !v2 )
    return 1;
  if ( *(char ***)(v2 + 60) == &off_470950 )
    goto LABEL_11;
  v4 = *(_BYTE *)(a1 + 3) & 0x60;
  if ( (*(_BYTE *)(a1 + 3) & 0x60) == 0 )
    goto LABEL_11;
  if ( v4 != 32 )
  {
LABEL_5:
    if ( v4 == 64 && !sub_2F3C64(a1) )
      goto LABEL_11;
    result = sub_2FD6C4(a1, *(_DWORD *)(a1 + 48), (int)"__GNU_EH_FRAME_HDR", 1, v2, 0, 0, 0, 0, (int)&v8);
    if ( !result )
      return result;
    v6 = v8;
    v7 = *(_BYTE *)(v8 + 51);
    *(_BYTE *)(v8 + 49) = 2;
    *(_BYTE *)(v6 + 51) = v7 | 2;
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 48) + 4) + 444) + 224))(a1, v6, 1);
    if ( !v1[44] )
    {
      v1[47] = 1;
      return 1;
    }
    return 1;
  }
  if ( sub_2F3C28(a1) )
  {
    v2 = v1[42];
    v4 = *(_BYTE *)(a1 + 3) & 0x60;
    goto LABEL_5;
  }
  v2 = v1[42];
LABEL_11:
  result = 1;
  *(_DWORD *)(v2 + 20) |= 0x8000u;
  v1[42] = 0;
  return result;
}

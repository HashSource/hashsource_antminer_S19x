int __fastcall sub_11B814(int a1, int a2, unsigned int a3, int a4)
{
  __int64 v8; // r0
  int v9; // r4
  int v10; // r8
  int v11; // r7
  _DWORD *v12; // r9
  int result; // r0
  unsigned __int8 *v14; // r2
  int v15; // r5
  int v16; // r7
  __int64 v17; // r0
  int v18; // r6
  void *v19; // r7
  int v20; // r1
  const void *v21; // r0
  int v22; // [sp+Ch] [bp-4h] BYREF

  v8 = sub_171258(a1);
  v9 = v8;
  v10 = *(_DWORD *)(*(_DWORD *)(v8 + 24) + 20);
  v11 = ((int (__fastcall *)(int, _DWORD))loc_15FA88)(a2, HIDWORD(v8));
  v12 = (_DWORD *)sub_11B2C0(a2, a3, a4, &v22);
  result = sub_1181D4(v12, (char *)0xFFFFFFFF, a1, v11, v22);
  v14 = *(unsigned __int8 **)(v9 + 24);
  v15 = result;
  if ( (unsigned int)*v14 - 18 <= 1 )
  {
    if ( *((_DWORD *)v14 + 5) )
    {
      v16 = sub_1181D4(v12, *(char **)(v10 + 20), v10, v11, v22);
      sub_26C3B8(v16);
      v17 = sub_26BBF8(a1, &unk_39D908, v16);
      v18 = v17;
      v19 = (void *)sub_26BCB8(v17, HIDWORD(v17));
      v21 = (const void *)sub_26BCB8(v15, v20);
      memcpy(v19, v21, *(_DWORD *)(v9 + 20));
      sub_26BF58(v18, 0);
      return v18;
    }
  }
  return result;
}

_DWORD *__fastcall sub_26E7B4(_DWORD *result)
{
  int v1; // r4
  _DWORD *v2; // r7
  _BYTE *v3; // r0
  void *v4; // r6
  _BYTE *v5; // r5
  const void *v6; // r0
  int v7; // r12
  __int64 v8; // r2

  v1 = (int)result;
  if ( *result )
  {
    v2 = (_DWORD *)result[17];
    v3 = sub_26BB80(v2);
    v4 = (void *)*((_DWORD *)v3 + 23);
    v5 = v3;
    if ( !v4 )
    {
      sub_26A9E8((int)(v3 + 68), (_DWORD *)v3 + 23);
      v4 = (void *)*((_DWORD *)v5 + 23);
    }
    v6 = (const void *)sub_26E738(v1);
    memcpy(v4, v6, v2[5]);
    v7 = *(_DWORD *)(v1 + 64);
    v8 = *(_QWORD *)(v1 + 80);
    *((_QWORD *)v5 + 9) = *(_QWORD *)(v1 + 72);
    *((_DWORD *)v5 + 16) = v7;
    *((_QWORD *)v5 + 10) = v8;
    return v5;
  }
  return result;
}

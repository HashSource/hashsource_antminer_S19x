_DWORD *sub_246778()
{
  __int64 v0; // r6
  ssize_t v1; // r0
  int v2; // r0
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r0
  __int16 buf; // [sp+Eh] [bp-2h] BYREF

  v0 = *(_QWORD *)&dword_48A5A0;
  lseek64(dword_46DCEC);
  v1 = sub_2464F8(&buf, 2);
  v2 = sub_16F654(v1);
  v3 = ((int (__fastcall *)(int))loc_165BB8)(v2);
  buf = sub_15C190((unsigned __int8 *)&buf, 2, v3);
  v4 = sub_D194C(buf);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4[7];
    if ( v6 )
      v5 = *(_DWORD **)(v6 + 52);
    else
      v5 = 0;
  }
  *(_QWORD *)&dword_48A5A0 = v0;
  lseek64(dword_46DCEC);
  return v5;
}

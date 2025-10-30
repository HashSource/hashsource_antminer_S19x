int __fastcall sub_1FEEA8(const char *a1)
{
  size_t v2; // r0
  void *v3; // r4
  _DWORD *v4; // r3
  void *v5; // r8
  void *v6; // r0
  bool v7; // zf
  __int64 v8; // r2
  _DWORD *v10; // r0
  void *v11; // [sp+Ch] [bp-24h] BYREF
  void *v12[2]; // [sp+10h] [bp-20h] BYREF
  _BYTE v13[16]; // [sp+18h] [bp-18h] BYREF
  void *ptr[2]; // [sp+28h] [bp-8h] BYREF
  _DWORD v15[4]; // [sp+30h] [bp+0h] BYREF

  v12[0] = v13;
  v12[1] = 0;
  v13[0] = 0;
  ptr[0] = v15;
  if ( !a1 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v2 = strlen(a1);
  v3 = (void *)v2;
  v11 = (void *)v2;
  if ( v2 > 0xF )
  {
    v10 = (_DWORD *)sub_33B2BC(ptr, &v11, 0);
    ptr[0] = v10;
    v15[0] = v11;
LABEL_11:
    memcpy(v10, a1, (size_t)v3);
    v3 = v11;
    v4 = ptr[0];
    goto LABEL_5;
  }
  if ( v2 == 1 )
  {
    v4 = v15;
    LOBYTE(v15[0]) = *a1;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v10 = v15;
    goto LABEL_11;
  }
  v4 = v15;
LABEL_5:
  ptr[1] = v3;
  *((_BYTE *)v3 + (_DWORD)v4) = 0;
  v5 = sub_9836C(0x6Cu);
  sub_1FEC84((unsigned int)v5 + 8, v12, 0, ptr);
  sub_33ACC0(v5, &dword_48938C);
  v6 = ptr[0];
  v7 = ptr[0] == v15;
  HIDWORD(v8) = dword_489398 + 1;
  LODWORD(v8) = dword_489394 + 1;
  *(_QWORD *)&dword_489394 = v8;
  *(_DWORD *)(dword_489390 + 8) = HIDWORD(v8);
  if ( !v7 )
    sub_339E64(v6);
  if ( v12[0] != v13 )
    sub_339E64(v12[0]);
  return sub_259F10("Function %s will be skipped when stepping.\n", a1);
}

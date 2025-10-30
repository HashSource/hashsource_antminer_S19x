int __fastcall sub_1FF670(const char *a1)
{
  const char *v1; // r5
  void *v2; // r0
  size_t v3; // r4
  _BYTE *v4; // r2
  bool v5; // zf
  void *v6; // r0
  void *v7; // r8
  int v8; // r3
  int v10; // r0
  void *v11[2]; // [sp+8h] [bp-30h] BYREF
  _DWORD v12[4]; // [sp+10h] [bp-28h] BYREF
  void *ptr[2]; // [sp+20h] [bp-18h] BYREF
  _BYTE v14[16]; // [sp+28h] [bp-10h] BYREF

  v1 = a1;
  if ( a1 )
  {
    v11[0] = v12;
  }
  else
  {
    v10 = sub_20DBB4();
    if ( !v10 )
      sub_946E0("No default file now.");
    v1 = (const char *)sub_204308(v10);
    v11[0] = v12;
    if ( !v1 )
      sub_33D0B8("basic_string::_M_construct null not valid");
  }
  v2 = (void *)strlen(v1);
  v3 = (size_t)v2;
  ptr[0] = v2;
  if ( (unsigned int)v2 > 0xF )
  {
    v6 = (void *)sub_33B2BC(v11, ptr, 0);
    v11[0] = v6;
    v12[0] = ptr[0];
LABEL_14:
    memcpy(v6, v1, v3);
    v4 = v11[0];
    goto LABEL_8;
  }
  v4 = v11[0];
  v5 = v2 == (void *)1;
  v6 = v11[0];
  if ( v5 )
  {
    *(_BYTE *)v11[0] = *v1;
    v4 = v11[0];
    goto LABEL_8;
  }
  if ( v3 )
    goto LABEL_14;
LABEL_8:
  v11[1] = ptr[0];
  v4[(unsigned int)ptr[0]] = 0;
  ptr[1] = 0;
  v14[0] = 0;
  ptr[0] = v14;
  v7 = sub_9836C(0x6Cu);
  sub_1FEC84((unsigned int)v7 + 8, v11, 0, ptr);
  sub_33ACC0(v7, &dword_48938C);
  v8 = dword_489398 + 1;
  ++dword_489394;
  *(_DWORD *)(dword_489390 + 8) = dword_489398 + 1;
  dword_489398 = v8;
  if ( ptr[0] != v14 )
    sub_339E64(ptr[0]);
  if ( v11[0] != v12 )
    sub_339E64(v11[0]);
  return sub_259F10("File %s will be skipped when stepping.\n", v1);
}

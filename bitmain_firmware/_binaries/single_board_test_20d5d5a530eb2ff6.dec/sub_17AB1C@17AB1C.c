int __fastcall sub_17AB1C(int a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r7
  int v8; // r9
  const char *v9; // r0
  __int64 v10; // r8
  size_t *v11; // r10
  int v12; // r2
  int v13; // r3
  unsigned int v14; // r11
  unsigned int v15; // r0
  const char *v16; // r11
  int v17; // r2
  unsigned int v18; // r0
  char *v19; // r0
  int v21; // r6
  int v22; // [sp+Ch] [bp-20h]
  char v23[24]; // [sp+14h] [bp-18h] BYREF

  if ( a4 )
  {
    v7 = a3 + 4;
    v8 = sub_BC6D0(a4, *(const void **)(a1 + 12), *(_DWORD *)(a1 + 16));
    sub_B550C(a2, "%*sSigned Certificate Timestamp:", a3, &byte_1A4198);
    sub_B550C(a2, "\n%*sVersion   : ", a3 + 4, &byte_1A4198);
    if ( !*(_DWORD *)a1 )
    {
      sub_B550C(a2, "v1 (0x0)");
      if ( v8 )
      {
        v9 = (const char *)sub_BC6BC(v8);
        sub_B550C(a2, "\n%*sLog       : %s", a3 + 4, &byte_1A4198, v9);
      }
      goto LABEL_5;
    }
LABEL_15:
    v21 = a3 + 16;
    sub_B550C(a2, "unknown\n%*s", v21, &byte_1A4198);
    return sub_12F308(a2, v21, 16, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8));
  }
  v7 = a3 + 4;
  sub_B550C(a2, "%*sSigned Certificate Timestamp:", a3, &byte_1A4198);
  sub_B550C(a2, "\n%*sVersion   : ", v7, &byte_1A4198);
  if ( *(_DWORD *)a1 )
    goto LABEL_15;
  sub_B550C(a2, "v1 (0x0)");
LABEL_5:
  v22 = a3 + 16;
  sub_B550C(a2, "\n%*sLog ID    : ", v7, &byte_1A4198);
  sub_12F308(a2, a3 + 16, 16, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 16));
  sub_B550C(a2, "\n%*sTimestamp : ", v7, &byte_1A4198);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = (size_t *)sub_B22C0();
  if ( v11 )
  {
    sub_189928(v10, HIDWORD(v10), 86400000, 0);
    v14 = sub_189928(v12, v13, 1000, 0);
    v15 = sub_189928(v10, HIDWORD(v10), 86400000, 0);
    sub_126104((int)v11, 0, __SPAIR64__(v14, v15));
    v16 = (const char *)sub_AE2B4((int)v11);
    sub_189928(v10, HIDWORD(v10), 1000, 0);
    sub_B5560(v23, 0x14u, "%.14s.%03dZ", v16, v17);
    if ( sub_1260CC(v11, v23) )
      sub_12614C(a2, (int)v11);
    j_ASN1_STRING_free_8((int)v11);
  }
  sub_B550C(a2, "\n%*sExtensions: ", v7, &byte_1A4198);
  if ( *(_DWORD *)(a1 + 36) )
    sub_12F308(a2, v22, 16, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 36));
  else
    sub_B550C(a2, (unsigned __int8 *)"none");
  sub_B550C(a2, "\n%*sSignature : ", v7, &byte_1A4198);
  v18 = sub_BD304((_BYTE *)a1);
  if ( v18 )
  {
    v19 = sub_EAB40(v18);
    sub_B550C(a2, (unsigned __int8 *)"%s", v19);
  }
  else
  {
    sub_B550C(a2, "%02X%02X", *(unsigned __int8 *)(a1 + 40), *(unsigned __int8 *)(a1 + 41));
  }
  sub_B550C(a2, "\n%*s            ", v7, &byte_1A4198);
  return sub_12F308(a2, v22, 16, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48));
}

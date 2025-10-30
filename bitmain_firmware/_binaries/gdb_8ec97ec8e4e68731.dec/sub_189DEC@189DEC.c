int __fastcall sub_189DEC(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r7
  const char *v7; // r8
  int v8; // r9
  int v9; // r10
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int result; // r0
  int v15; // r9
  unsigned int v16; // r10
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // [sp+10h] [bp-5Ch]
  int v21; // [sp+14h] [bp-58h]
  int v22; // [sp+1Ch] [bp-50h]
  int v23; // [sp+20h] [bp-4Ch]
  __int64 v24; // [sp+24h] [bp-48h]
  int v25; // [sp+2Ch] [bp-40h]
  __int64 v26; // [sp+34h] [bp-38h]
  int v27; // [sp+3Ch] [bp-30h]
  __int64 v28; // [sp+44h] [bp-28h]
  int v29; // [sp+4Ch] [bp-20h]
  void *ptr; // [sp+50h] [bp-1Ch] BYREF
  __int64 v31; // [sp+54h] [bp-18h] BYREF
  int v32; // [sp+5Ch] [bp-10h]

  if ( dword_487930 )
  {
    v5 = sub_277578(&ptr, a2);
    v4 = a1 + 2;
    v6 = *(_DWORD *)sub_242FC8(v5);
    v7 = (const char *)ptr;
    v8 = ps_getpid_0((int)(a1 + 2));
    v9 = sub_98F68((int)(a1 + 2));
    v10 = sub_98F70((int)(a1 + 2));
    sub_2594B0(v6, "infrun: saving status %s for %d.%ld.%ld\n", v7, v8, v9, v10);
    if ( ptr != (char *)&v31 + 4 )
      sub_339E64(ptr);
  }
  else
  {
    v4 = a1 + 2;
  }
  v11 = a2[1];
  v12 = a2[2];
  v13 = a2[3];
  a1[38] = *a2;
  a1[39] = v11;
  a1[40] = v12;
  a1[41] = v13;
  a1[42] = 1;
  result = sub_1DDB40(*v4, v4[1], v4[2]);
  if ( *a2 == 1 && a2[1] == 5 )
  {
    v15 = *(_DWORD *)(result + 4);
    v16 = sub_1DFB3C(result);
    sub_189C68((int)a1, a1[38], a1 + 39);
    v20 = v4[1];
    v21 = v4[2];
    v26 = qword_4878EC;
    v27 = dword_4878F4;
    LODWORD(qword_4878EC) = *v4;
    HIDWORD(qword_4878EC) = v20;
    dword_4878F4 = v21;
    v17 = off_489A24(&dword_4899A0);
    result = v26;
    qword_4878EC = v26;
    dword_4878F4 = v27;
    if ( v17 )
    {
      a1[37] = 3;
    }
    else
    {
      if ( off_4899F8(&dword_4899A0) )
      {
        v22 = v4[1];
        v23 = v4[2];
        v28 = qword_4878EC;
        v29 = dword_4878F4;
        LODWORD(qword_4878EC) = *v4;
        HIDWORD(qword_4878EC) = v22;
        dword_4878F4 = v23;
        v18 = ((int (__fastcall *)(int *))off_4899F4)(&dword_4899A0);
        result = v28;
        qword_4878EC = v28;
        dword_4878F4 = v29;
        if ( v18 )
          goto LABEL_14;
      }
      if ( off_489A00(&dword_4899A0) )
      {
        v24 = *(_QWORD *)v4;
        v25 = v4[2];
        v31 = qword_4878EC;
        v32 = dword_4878F4;
        qword_4878EC = v24;
        dword_4878F4 = v25;
        v19 = ((int (__fastcall *)(int *))off_4899FC)(&dword_4899A0);
        result = v31;
        qword_4878EC = v31;
        dword_4878F4 = v32;
        if ( v19 )
          goto LABEL_23;
      }
      if ( !off_489A00(&dword_4899A0) && (result = sub_CF7C8(v15, v16)) != 0 )
      {
LABEL_23:
        a1[37] = 2;
      }
      else
      {
        if ( !off_4899F8(&dword_4899A0) )
        {
          result = sub_CF724(v15, v16);
          if ( result )
          {
LABEL_14:
            a1[37] = 1;
            return result;
          }
        }
        result = sub_23DD7C(a1);
        if ( !result )
        {
          result = sub_184CAC(a1);
          if ( result )
            a1[37] = 4;
        }
      }
    }
  }
  return result;
}

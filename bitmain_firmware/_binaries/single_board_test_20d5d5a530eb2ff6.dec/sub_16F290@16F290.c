int __fastcall sub_16F290(int a1, _DWORD *a2, int a3, int a4)
{
  char *v6; // r9
  unsigned int v7; // r1
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r5
  int v11; // r4
  int *v12; // r6
  bool v13; // cc
  unsigned int v14; // r1
  signed int v15; // r6
  const char *v16; // r3
  const char *v17; // r2
  int v18; // r9
  char *v19; // r0
  char *v20; // r4
  _DWORD *v22; // [sp+14h] [bp-A0h]
  int v23; // [sp+18h] [bp-9Ch]
  int v24; // [sp+1Ch] [bp-98h]
  char *v26; // [sp+2Ch] [bp-88h]
  char v27[132]; // [sp+30h] [bp-84h] BYREF

  if ( *a2
    && (sub_B550C(a3, "%*sadmissionAuthority:\n", a4, &byte_1A4198) <= 0
     || sub_B550C(a3, "%*s  ", a4, &byte_1A4198) <= 0
     || sub_16FDE0(a3, *a2) <= 0
     || sub_B550C(a3, (unsigned __int8 *)"\n") <= 0) )
  {
    return -1;
  }
  v24 = 0;
  v6 = &byte_1A4198;
  while ( v24 < sub_10C010(a2[1]) )
  {
    v7 = v24++;
    v22 = (_DWORD *)sub_10C01C((_DWORD *)a2[1], v7);
    if ( sub_B550C(a3, "%*sEntry %0d:\n", a4, &byte_1A4198, v24) <= 0
      || *v22
      && (sub_B550C(a3, "%*s  admissionAuthority:\n", a4, &byte_1A4198) <= 0
       || sub_B550C(a3, byte_1E1BE4, a4, &byte_1A4198) <= 0
       || sub_16FDE0(a3, *v22) <= 0
       || sub_B550C(a3, (unsigned __int8 *)"\n") <= 0) )
    {
      return -1;
    }
    v8 = v22[1];
    if ( v8 )
    {
      if ( sub_16F158(v8, a3, a4) <= 0 )
        return -1;
    }
    v23 = 0;
    while ( v23 < sub_10C010(v22[2]) )
    {
      v9 = v23++;
      v10 = sub_10C01C((_DWORD *)v22[2], v9);
      if ( sub_B550C(a3, "%*s  Profession Info Entry %0d:\n", a4, &byte_1A4198, v23) <= 0
        || *(_DWORD *)(v10 + 12)
        && (sub_B550C(a3, "%*s    registrationNumber: ", a4, &byte_1A4198) <= 0
         || sub_128190(a3, *(int **)(v10 + 12)) <= 0
         || sub_B550C(a3, (unsigned __int8 *)"\n") <= 0)
        || *(_DWORD *)v10 && sub_16F158(*(_DWORD *)v10, a3, a4 + 2) <= 0 )
      {
        return -1;
      }
      if ( *(_DWORD *)(v10 + 4) )
      {
        if ( sub_B550C(a3, "%*s    Info Entries:\n", a4, &byte_1A4198) <= 0 )
          return -1;
        v11 = 0;
        while ( 1 )
        {
          v13 = v11 < sub_10C010(*(_DWORD *)(v10 + 4));
          v14 = v11++;
          if ( !v13 )
            break;
          v12 = (int *)sub_10C01C(*(_DWORD **)(v10 + 4), v14);
          if ( sub_B550C(a3, byte_1E1C44, a4, v6) <= 0
            || sub_128190(a3, v12) <= 0
            || sub_B550C(a3, (unsigned __int8 *)"\n") <= 0 )
          {
            return -1;
          }
        }
      }
      if ( *(_DWORD *)(v10 + 8) )
      {
        if ( sub_B550C(a3, "%*s    Profession OIDs:\n", a4, &byte_1A4198) <= 0 )
          return -1;
        v15 = 0;
        v26 = v6;
        while ( v15 < sub_10C010(*(_DWORD *)(v10 + 8)) )
        {
          v18 = sub_10C01C(*(_DWORD **)(v10 + 8), v15);
          v19 = sub_EAC84(v18);
          v20 = sub_EAB40((unsigned int)v19);
          sub_EACFC(v27, 128, v18, 1);
          if ( v20 )
          {
            v16 = " (";
            v17 = ")";
          }
          else
          {
            v17 = &byte_1A4198;
            v16 = &byte_1A4198;
            v20 = &byte_1A4198;
          }
          ++v15;
          if ( sub_B550C(a3, "%*s      %s%s%s%s\n", a4, &byte_1A4198, v20, v16, v27, v17) <= 0 )
            return -1;
        }
        v6 = v26;
      }
    }
  }
  return 1;
}

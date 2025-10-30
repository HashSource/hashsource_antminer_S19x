int __fastcall sub_13CDC(int a1, const char **a2)
{
  void *v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  __int64 v18; // r0
  int v19; // r0
  __int64 v20; // r0
  int v21; // r0
  __int64 v22; // r0
  int v23; // r0
  __int64 v24; // r0
  int v25; // r0
  int v26; // r0
  char v29[12]; // [sp+10h] [bp-95Ch] BYREF
  char v30[24]; // [sp+810h] [bp-15Ch] BYREF
  char v31[8]; // [sp+828h] [bp-144h] BYREF
  char v32[12]; // [sp+830h] [bp-13Ch] BYREF
  char v33[128]; // [sp+83Ch] [bp-130h] BYREF
  char s[128]; // [sp+8BCh] [bp-B0h] BYREF
  int v35; // [sp+93Ch] [bp-30h]
  int v36; // [sp+940h] [bp-2Ch]
  int v37; // [sp+944h] [bp-28h]
  int v38; // [sp+948h] [bp-24h]
  int v39; // [sp+94Ch] [bp-20h]
  int v40; // [sp+950h] [bp-1Ch]
  int v41; // [sp+954h] [bp-18h]
  const char **v42; // [sp+958h] [bp-14h]
  int v43; // [sp+95Ch] [bp-10h]
  int v44; // [sp+960h] [bp-Ch]
  int i; // [sp+964h] [bp-8h]

  v43 = 0;
  i = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v42 = a2;
  v41 = 0;
  v40 = 0;
  memset(s, 0, sizeof(s));
  memset(v33, 0, sizeof(v33));
  memset(v32, 0, sizeof(v32));
  memset(v31, 0, sizeof(v31));
  memset(v30, 0, sizeof(v30));
  v44 = 0;
  if ( v42 && a1 )
  {
    sub_134E0(a1, v42);
    v3 = sub_13644(a1);
    v4 = sub_65D18(v3);
    v41 = v4;
    for ( i = 0; i < dword_90E90; ++i )
    {
      v39 = *(_DWORD *)(dword_90F34 + 4 * i);
      if ( v39 )
      {
        v40 = sub_651D4(v4);
        v5 = sub_66F54(i, i >> 31);
        sub_65420(v40, "index", v5);
        memset(s, 0, sizeof(s));
        snprintf(s, 0x80u, "%s", *(const char **)(v39 + 164));
        v6 = sub_66A38(s);
        sub_65420(v40, "url", v6);
        memset(v33, 0, sizeof(v33));
        snprintf(v33, 0x80u, "%s", *(const char **)(v39 + 172));
        v7 = sub_66A38(v33);
        sub_65420(v40, "user", v7);
        memset(v32, 0, sizeof(v32));
        v8 = *(_DWORD *)(v39 + 100);
        if ( v8 == 1 )
        {
          if ( *(_BYTE *)(v39 + 97) )
            strcpy(v32, "Dead");
          else
            strcpy(v32, "Alive");
        }
        else if ( v8 )
        {
          if ( v8 == 2 )
            strcpy(v32, "Rejecting");
          else
            strcpy(v32, "Unknown");
        }
        else
        {
          strcpy(v32, "Disabled");
        }
        v9 = sub_66A38(v32);
        sub_65420(v40, "status", v9);
        v10 = sub_66F54(*(_DWORD *)(v39 + 4), *(int *)(v39 + 4) >> 31);
        sub_65420(v40, "priority", v10);
        v11 = sub_66F54(*(_DWORD *)(v39 + 116), 0);
        sub_65420(v40, "getworks", v11);
        v12 = sub_66F54(*(_DWORD *)(v39 + 8), *(_DWORD *)(v39 + 12));
        sub_65420(v40, "accepted", v12);
        v13 = sub_66F54(*(_DWORD *)(v39 + 16), *(_DWORD *)(v39 + 20));
        sub_65420(v40, "rejected", v13);
        v14 = sub_66F54(*(_DWORD *)(v39 + 124), 0);
        sub_65420(v40, "discarded", v14);
        v15 = sub_66F54(*(_DWORD *)(v39 + 120), 0);
        sub_65420(v40, "stale", v15);
        memset(v31, 0, sizeof(v31));
        snprintf(v31, 8u, "%s", (const char *)(v39 + 48));
        v16 = sub_66A38(v31);
        sub_65420(v40, "diff", v16);
        v17 = sub_66F54(*(_DWORD *)(v39 + 40), *(_DWORD *)(v39 + 44));
        sub_65420(v40, "diff1", v17);
        v18 = sub_682AC(*(_DWORD *)(v39 + 72), *(_DWORD *)(v39 + 76));
        v19 = sub_66F54(v18, HIDWORD(v18));
        sub_65420(v40, "diffa", v19);
        v20 = sub_682AC(*(_DWORD *)(v39 + 80), *(_DWORD *)(v39 + 84));
        v21 = sub_66F54(v20, HIDWORD(v20));
        sub_65420(v40, "diffr", v21);
        v22 = sub_682AC(*(_DWORD *)(v39 + 88), *(_DWORD *)(v39 + 92));
        v23 = sub_66F54(v22, HIDWORD(v22));
        sub_65420(v40, "diffs", v23);
        v24 = sub_682AC(*(_DWORD *)(v39 + 360), *(_DWORD *)(v39 + 364));
        v25 = sub_66F54(v24, HIDWORD(v24));
        sub_65420(v40, "lsdiff", v25);
        memset(v30, 0, sizeof(v30));
        if ( *(int *)(v39 + 352) > 0 )
        {
          v44 = time(0) - *(_DWORD *)(v39 + 352);
          if ( v44 < 0 )
            v44 = 0;
          snprintf(v30, 0x18u, "%d:%02d:%02d", v44 / 3600, v44 % 3600 / 60, v44 % 3600 % 60);
        }
        else
        {
          strcpy(v30, "0");
        }
        v26 = sub_66A38(v30);
        sub_65420(v40, "lstime", v26);
        v4 = sub_661B4(v41, v40);
      }
    }
    sub_65420(a1, "POOLS", v41);
    return v43;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v29, 0x800u, "%s: input bad api param\n", "get_pools");
      sub_1DB6C(3, v29, 0);
    }
    return -2147483646;
  }
}

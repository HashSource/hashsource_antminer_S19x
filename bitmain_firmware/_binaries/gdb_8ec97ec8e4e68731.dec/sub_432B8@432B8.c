int __fastcall sub_432B8(const char *a1, char *a2, const void *a3, int a4, unsigned __int64 a5, __int64 a6, _QWORD *a7)
{
  int v10; // r0
  int v11; // r4
  int v12; // r1
  int v13; // r0
  int v14; // r7
  ssize_t v15; // r4
  int v16; // r0
  DIR *v17; // r0
  DIR *v18; // r5
  __int64 v19; // r10
  int v20; // r0
  bool v21; // zf
  const char *v22; // r0
  int v23; // r7
  __int64 v25; // r0
  unsigned __int64 v26; // [sp+10h] [bp-15Ch]
  int v27; // [sp+1Ch] [bp-150h]
  _DWORD v28[22]; // [sp+28h] [bp-144h] BYREF
  _BYTE v29[16]; // [sp+80h] [bp-ECh] BYREF
  int v30; // [sp+90h] [bp-DCh]
  char name[132]; // [sp+E8h] [bp-84h] BYREF

  v10 = sub_98F68(&dword_4878EC);
  v11 = v10;
  if ( a1 )
  {
    sub_93170(name, 128, "/proc/%d/fd/%s", v10, a1);
    v12 = (int)a3;
    if ( a3 )
      v12 = 1;
    v13 = sub_967B4(name, v12, 0);
    v14 = v13;
    if ( v13 <= 0 )
      return -1;
    if ( a5 )
    {
      LODWORD(v25) = lseek64(v13);
      if ( a5 != v25 )
      {
        close(v14);
        return 0;
      }
    }
    if ( a3 )
    {
      v15 = write(v14, a3, a6);
    }
    else
    {
      if ( !a2 )
      {
        close(v14);
        return -1;
      }
      v15 = read(v14, a2, a6);
    }
    close(v14);
    if ( v15 >= 0 )
    {
      if ( v15 )
      {
        *a7 = v15;
        return 1;
      }
      return 0;
    }
  }
  else if ( a2 )
  {
    v16 = sub_16F654(v10);
    v27 = ((int (__fastcall *)(int))loc_165BB8)(v16);
    sub_93170(name, 128, "/proc/%d/fd", v11);
    v17 = opendir(name);
    v18 = v17;
    if ( v17 )
    {
      rewinddir(v17);
      v19 = 0;
      v26 = 0;
      while ( 1 )
      {
        v20 = readdir64(v18);
        v21 = v20 == 0;
        v22 = (const char *)(v20 + 19);
        if ( v21 )
          break;
        v23 = strtol(v22, 0, 10);
        if ( v23 )
        {
          sub_93170(name, 128, "/proc/%d/fd/%d", v11, v23);
          if ( !_xstat64(3, name, v29) && (v30 & 0xF000) == 0x4000 && !statfs64(name, v28) && v28[0] == 600421966 )
          {
            if ( a5 <= v26 && v26 + 4 <= a5 + a6 )
            {
              sub_15C34C(&a2[v26 - a5], 4, v27, v23 >> 31, v23, v23 >> 31);
              v19 += 4;
            }
            v26 += 4LL;
          }
        }
      }
      closedir(v18);
      if ( v19 )
      {
        *a7 = v19;
        return 1;
      }
      return 0;
    }
  }
  return -1;
}

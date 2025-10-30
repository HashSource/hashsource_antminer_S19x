int __fastcall sub_76F20(int a1, const void *a2, size_t a3, _DWORD *a4)
{
  pthread_mutex_t *v4; // r5
  int v8; // r4
  ssize_t v9; // r0
  int v11; // [sp+8h] [bp-148h] BYREF
  int v12; // [sp+Ch] [bp-144h] BYREF
  int v13; // [sp+10h] [bp-140h] BYREF
  int v14; // [sp+14h] [bp-13Ch]
  int v15; // [sp+18h] [bp-138h]
  int v16; // [sp+1Ch] [bp-134h]
  int v17; // [sp+20h] [bp-130h]
  int v18; // [sp+24h] [bp-12Ch]
  int v19; // [sp+28h] [bp-128h]
  int v20; // [sp+2Ch] [bp-124h]
  int v21; // [sp+30h] [bp-120h] BYREF
  int v22; // [sp+34h] [bp-11Ch]
  int v23; // [sp+38h] [bp-118h]
  int v24; // [sp+3Ch] [bp-114h]
  int v25; // [sp+40h] [bp-110h]
  int v26; // [sp+44h] [bp-10Ch]
  int v27; // [sp+48h] [bp-108h]
  int v28; // [sp+4Ch] [bp-104h]
  _DWORD buf[64]; // [sp+50h] [bp-100h] BYREF

  if ( !dword_231D0C )
    return -1;
  v4 = *(pthread_mutex_t **)(a1 + 128);
  if ( !v4 )
    return -2;
  v8 = pthread_mutex_trylock(*(pthread_mutex_t **)(a1 + 128));
  if ( v8 )
    return -3;
  if ( send(v4[1].__owner, a2, a3, 0) <= 0 )
  {
    v8 = -4;
    pthread_mutex_unlock(v4);
  }
  else
  {
    memset(buf, 0, sizeof(buf));
    v9 = recv(v4[1].__owner, buf, 0x100u, 0);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v21 = 0;
    v22 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( v9 > 0 )
      _isoc99_sscanf(buf, "%x%d%s%s", &v11, &v12, &v13, &v21);
    if ( a4 )
      *a4 = v12;
    pthread_mutex_unlock(v4);
  }
  return v8;
}

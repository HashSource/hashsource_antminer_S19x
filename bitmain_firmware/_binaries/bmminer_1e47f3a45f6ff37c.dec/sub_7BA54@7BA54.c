int __fastcall sub_7BA54(int a1, const void *a2, size_t a3, _DWORD *a4)
{
  pthread_mutex_t *v4; // r5
  ssize_t v8; // r0
  int v10; // [sp+8h] [bp-160h] BYREF
  int v11; // [sp+Ch] [bp-15Ch] BYREF
  int v12; // [sp+10h] [bp-158h] BYREF
  int v13; // [sp+14h] [bp-154h]
  int v14; // [sp+18h] [bp-150h]
  int v15; // [sp+1Ch] [bp-14Ch]
  int v16; // [sp+20h] [bp-148h]
  int v17; // [sp+24h] [bp-144h]
  int v18; // [sp+28h] [bp-140h]
  int v19; // [sp+2Ch] [bp-13Ch]
  int v20; // [sp+30h] [bp-138h] BYREF
  int v21; // [sp+34h] [bp-134h]
  int v22; // [sp+38h] [bp-130h]
  int v23; // [sp+3Ch] [bp-12Ch]
  int v24; // [sp+40h] [bp-128h]
  int v25; // [sp+44h] [bp-124h]
  int v26; // [sp+48h] [bp-120h]
  int v27; // [sp+4Ch] [bp-11Ch]
  _DWORD buf[70]; // [sp+50h] [bp-118h] BYREF

  if ( !dword_5BF608 )
    return -1;
  v4 = *(pthread_mutex_t **)(a1 + 128);
  if ( !v4 )
    return -2;
  if ( pthread_mutex_trylock(*(pthread_mutex_t **)(a1 + 128)) )
    return -3;
  if ( send(v4[1].__owner, a2, a3, 0) <= 0 )
  {
    pthread_mutex_unlock(v4);
    return -4;
  }
  else
  {
    memset(buf, 0, 256);
    v8 = recv(v4[1].__owner, buf, 0x100u, 0);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( v8 > 0 )
      _isoc99_sscanf(buf, "%x%d%s%s", &v10, &v11, &v12, &v20);
    if ( a4 )
      *a4 = v11;
    pthread_mutex_unlock(v4);
    return 0;
  }
}

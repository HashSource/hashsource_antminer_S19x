int __fastcall sub_28B7C(int a1)
{
  int inited; // r0
  int v2; // r0
  int v3; // r0
  int error; // r0
  int current_cipher; // r0
  const char *name; // r0
  const char *v8; // r0
  size_t v9; // r0
  char v12[2080]; // [sp+14h] [bp-858h] BYREF
  int peer_certificate; // [sp+834h] [bp-38h]
  int verify_result; // [sp+838h] [bp-34h]
  int v15; // [sp+83Ch] [bp-30h]
  int v16; // [sp+840h] [bp-2Ch]
  int cert_store; // [sp+844h] [bp-28h]
  int bio_X509; // [sp+848h] [bp-24h]
  int v19; // [sp+84Ch] [bp-20h]
  int v20; // [sp+850h] [bp-1Ch]
  size_t v21; // [sp+854h] [bp-18h]
  char *s; // [sp+858h] [bp-14h]
  char v23; // [sp+85Fh] [bp-Dh]

  v23 = 0;
  s = "-----BEGIN CERTIFICATE-----\n"
      "MIIC7zCCAdcCFFbqE9PJlIVF9gfzurkXzS6t7SPIMA0GCSqGSIb3DQEBCwUAMDQx\n"
      "CzAJBgNVBAYTAlNHMRMwEQYDVQQIDApTb21lLVN0YXRlMRAwDgYDVQQKDAdBTlRQ\n"
      "T09MMB4XDTI0MDgzMDAyNDAwMloXDTM0MDgyODAyNDAwMlowNDELMAkGA1UEBhMC\n"
      "U0cxEzARBgNVBAgMClNvbWUtU3RhdGUxEDAOBgNVBAoMB0FOVFBPT0wwggEiMA0G\n"
      "CSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCeWq27wElC20BA1ro6WSp/vQkVMJvK\n"
      "dOPkWjARKZcz+SE3ruEGo/x/Wqt3uBfzzKlGuae4nbEfBEj1yNl6bCA847RNurV4\n"
      "t7c4n7pK969hGXi9P77ckBlG69xMKvk4hfDvpJBWxHD9GF7Zi2ntfxkH7lsFiLwK\n"
      "SaMtvdVIBDY6lOIPfKMdmYeJxbl5wWtXlXSF2cYvLcZa4s6TsT2ead8lLEy7jVR2\n"
      "4MPAbc+EdPlFIH96hSvJjGSO+27RqiiUwGzA8BSZTa7yXjypGuIhizsjPqQSc7rN\n"
      "qKr+0Cebblw7X0UxDvr/0LQSZTQj2lF9MZ1O7MyTq6sCQLTIehuUdZj5AgMBAAEw\n"
      "DQYJKoZIhvcNAQELBQADggEBAE7SpQFMU8fXKQUKmhYn+LbSLyYUJcYBFfyjicZt\n"
      "H6FjmzTqaHApzjj013kwMfKQ5ymWAyDSnf9fwZUTh8jzw9UaRXfvkSkw1OBY3WzH\n"
      "ROJb6MA4nOaahPDvVxoCV/Ypvky17BH0Vkt+p7gs+58dDDRAVg6C5iSueYXHUmAs\n"
      "6vxAKX1XnkIkTakxjJAx1h+i1FCCsuWrO1wwZLgivXnmltcVRxkPkrz7k+XsKfa7\n"
      "70HDg1PN1fL6L5pFQhb3NfVonYaVZAbsxMjnXVFGbsTrnc+1IfJ5rTBAbK67Sa2r\n"
      "uAJMOjhJj0foq2v9TmSVqCjpK++9ToviWuf+8/C7Kc/EJEk=\n"
      "-----END CERTIFICATE-----\n";
  v21 = strlen(
          "-----BEGIN CERTIFICATE-----\n"
          "MIIC7zCCAdcCFFbqE9PJlIVF9gfzurkXzS6t7SPIMA0GCSqGSIb3DQEBCwUAMDQx\n"
          "CzAJBgNVBAYTAlNHMRMwEQYDVQQIDApTb21lLVN0YXRlMRAwDgYDVQQKDAdBTlRQ\n"
          "T09MMB4XDTI0MDgzMDAyNDAwMloXDTM0MDgyODAyNDAwMlowNDELMAkGA1UEBhMC\n"
          "U0cxEzARBgNVBAgMClNvbWUtU3RhdGUxEDAOBgNVBAoMB0FOVFBPT0wwggEiMA0G\n"
          "CSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCeWq27wElC20BA1ro6WSp/vQkVMJvK\n"
          "dOPkWjARKZcz+SE3ruEGo/x/Wqt3uBfzzKlGuae4nbEfBEj1yNl6bCA847RNurV4\n"
          "t7c4n7pK969hGXi9P77ckBlG69xMKvk4hfDvpJBWxHD9GF7Zi2ntfxkH7lsFiLwK\n"
          "SaMtvdVIBDY6lOIPfKMdmYeJxbl5wWtXlXSF2cYvLcZa4s6TsT2ead8lLEy7jVR2\n"
          "4MPAbc+EdPlFIH96hSvJjGSO+27RqiiUwGzA8BSZTa7yXjypGuIhizsjPqQSc7rN\n"
          "qKr+0Cebblw7X0UxDvr/0LQSZTQj2lF9MZ1O7MyTq6sCQLTIehuUdZj5AgMBAAEw\n"
          "DQYJKoZIhvcNAQELBQADggEBAE7SpQFMU8fXKQUKmhYn+LbSLyYUJcYBFfyjicZt\n"
          "H6FjmzTqaHApzjj013kwMfKQ5ymWAyDSnf9fwZUTh8jzw9UaRXfvkSkw1OBY3WzH\n"
          "ROJb6MA4nOaahPDvVxoCV/Ypvky17BH0Vkt+p7gs+58dDDRAVg6C5iSueYXHUmAs\n"
          "6vxAKX1XnkIkTakxjJAx1h+i1FCCsuWrO1wwZLgivXnmltcVRxkPkrz7k+XsKfa7\n"
          "70HDg1PN1fL6L5pFQhb3NfVonYaVZAbsxMjnXVFGbsTrnc+1IfJ5rTBAbK67Sa2r\n"
          "uAJMOjhJj0foq2v9TmSVqCjpK++9ToviWuf+8/C7Kc/EJEk=\n"
          "-----END CERTIFICATE-----\n")
      + 1;
  OPENSSL_init_ssl(0, 0, 0);
  OPENSSL_init_crypto(12, 0, 0);
  inited = OPENSSL_init_ssl(2097154, 0, 0);
  v2 = TLS_client_method(inited);
  v20 = SSL_CTX_new(v2);
  v3 = BIO_s_mem();
  v19 = BIO_new(v3);
  BIO_write(
    v19,
    "-----BEGIN CERTIFICATE-----\n"
    "MIIC7zCCAdcCFFbqE9PJlIVF9gfzurkXzS6t7SPIMA0GCSqGSIb3DQEBCwUAMDQx\n"
    "CzAJBgNVBAYTAlNHMRMwEQYDVQQIDApTb21lLVN0YXRlMRAwDgYDVQQKDAdBTlRQ\n"
    "T09MMB4XDTI0MDgzMDAyNDAwMloXDTM0MDgyODAyNDAwMlowNDELMAkGA1UEBhMC\n"
    "U0cxEzARBgNVBAgMClNvbWUtU3RhdGUxEDAOBgNVBAoMB0FOVFBPT0wwggEiMA0G\n"
    "CSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCeWq27wElC20BA1ro6WSp/vQkVMJvK\n"
    "dOPkWjARKZcz+SE3ruEGo/x/Wqt3uBfzzKlGuae4nbEfBEj1yNl6bCA847RNurV4\n"
    "t7c4n7pK969hGXi9P77ckBlG69xMKvk4hfDvpJBWxHD9GF7Zi2ntfxkH7lsFiLwK\n"
    "SaMtvdVIBDY6lOIPfKMdmYeJxbl5wWtXlXSF2cYvLcZa4s6TsT2ead8lLEy7jVR2\n"
    "4MPAbc+EdPlFIH96hSvJjGSO+27RqiiUwGzA8BSZTa7yXjypGuIhizsjPqQSc7rN\n"
    "qKr+0Cebblw7X0UxDvr/0LQSZTQj2lF9MZ1O7MyTq6sCQLTIehuUdZj5AgMBAAEw\n"
    "DQYJKoZIhvcNAQELBQADggEBAE7SpQFMU8fXKQUKmhYn+LbSLyYUJcYBFfyjicZt\n"
    "H6FjmzTqaHApzjj013kwMfKQ5ymWAyDSnf9fwZUTh8jzw9UaRXfvkSkw1OBY3WzH\n"
    "ROJb6MA4nOaahPDvVxoCV/Ypvky17BH0Vkt+p7gs+58dDDRAVg6C5iSueYXHUmAs\n"
    "6vxAKX1XnkIkTakxjJAx1h+i1FCCsuWrO1wwZLgivXnmltcVRxkPkrz7k+XsKfa7\n"
    "70HDg1PN1fL6L5pFQhb3NfVonYaVZAbsxMjnXVFGbsTrnc+1IfJ5rTBAbK67Sa2r\n"
    "uAJMOjhJj0foq2v9TmSVqCjpK++9ToviWuf+8/C7Kc/EJEk=\n"
    "-----END CERTIFICATE-----\n",
    v21);
  bio_X509 = PEM_read_bio_X509(v19, 0, 0, 0);
  if ( bio_X509 )
  {
    cert_store = SSL_CTX_get_cert_store(v20);
    X509_STORE_add_cert(cert_store, bio_X509);
    BIO_free(v19);
    v16 = SSL_new(v20);
    SSL_set_fd(v16, *(_DWORD *)(a1 + 588));
    v15 = SSL_connect(v16);
    if ( v15 == 1 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        current_cipher = SSL_get_current_cipher(v16);
        name = (const char *)SSL_CIPHER_get_name(current_cipher);
        snprintf(v12, 0x800u, "Connected with %s encryption\n", name);
        sub_1E4EC(6, v12, 0);
      }
      verify_result = SSL_get_verify_result(v16);
      if ( !verify_result || verify_result == 9 || verify_result == 10 )
      {
        peer_certificate = SSL_get_peer_certificate(v16);
        if ( peer_certificate )
        {
          v9 = strlen(*(const char **)(a1 + 576));
          if ( X509_check_host(peer_certificate, *(_DWORD *)(a1 + 576), v9, 0, 0) == 1 )
          {
            *(_DWORD *)(a1 + 600) = v20;
            *(_DWORD *)(a1 + 596) = v16;
            *(_DWORD *)(a1 + 604) = bio_X509;
            return 1;
          }
        }
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          strcpy(v12, "cert check fail\n");
          sub_1E4EC(3, v12, 0);
        }
      }
      else
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          v8 = (const char *)X509_verify_cert_error_string(verify_result);
          snprintf(v12, 0x800u, "Verify return code: %ld (%s)\n", verify_result, v8);
          sub_1E4EC(3, v12, 0);
        }
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          strcpy(v12, "cert of pool is verify fail\n");
          sub_1E4EC(3, v12, 0);
        }
      }
      SSL_shutdown(v16);
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v12, 0x800u, "unable to connect pool by ssl, connect ret %d\n", v15);
        sub_1E4EC(3, v12, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        error = SSL_get_error(v16, v15);
        snprintf(v12, 0x800u, "SSL error #%d in accept,program terminated\n", error);
        sub_1E4EC(3, v12, 0);
      }
    }
    X509_free(bio_X509);
    SSL_CTX_free(v20);
    SSL_free(v16);
    return 0;
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    strcpy(v12, "unable to parse certificate in memory\n");
    sub_1E4EC(3, v12, 0);
  }
  BIO_free(v19);
  return 0;
}

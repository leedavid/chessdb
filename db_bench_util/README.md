**Test Enviroument**
- PHP 5.x with Judy, Redis, CCBoard, CCRule extensions
- Nutcracker

**Procedure**
- Prepare your database with sample_dataset
- Set memory_limit=8192M in php.ini
- Run update.php with PHP CLI
- Observe last value of output (combined read+update op/s)

Compare with our baseline ssdb-mod and improve performance.

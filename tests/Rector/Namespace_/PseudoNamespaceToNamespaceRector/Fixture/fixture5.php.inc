<?php

namespace ChangeMe_ToNamespaced;

use PHPUnit_TestCase;
use Rector\Core\Tests\Rector\Namespace_\PseudoNamespaceToNamespaceRector\Source\Keep_This;

class SomeTestCase
{
    /**
     * @return \ChangeMe_AnotherNamespace
     */
    public function someMethod(): Keep_This
    {
        if ($this instanceof PHPUnit_TestCase) {
            return true;
        }
    }
}

?>
-----
<?php

namespace ChangeMe\ToNamespaced;

use PHPUnit\TestCase;
use Rector\Core\Tests\Rector\Namespace_\PseudoNamespaceToNamespaceRector\Source\Keep_This;

class SomeTestCase
{
    /**
     * @return \ChangeMe\AnotherNamespace
     */
    public function someMethod(): Keep_This
    {
        if ($this instanceof \PHPUnit\TestCase) {
            return true;
        }
    }
}

?>
